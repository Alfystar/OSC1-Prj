/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * RBFMatrix.c
 *
 * Code generation for function 'RBFMatrix'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "RBFMatrix.h"
#include "RBFMatrix_emxutil.h"
#include "RBFMatrix_mexutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "RBFMatrix_data.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 39,  /* lineNo */
  5,                                   /* colNo */
  "id2Coord",                          /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 4,     /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 6,   /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 9,   /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 12,  /* lineNo */
  "RBFMatrix",                         /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 49,  /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 94,  /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 19,  /* lineNo */
  "checkAndSaturateExpandSize",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\checkAndSaturateExpandSize.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 38,  /* lineNo */
  "id2Coord",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 39,  /* lineNo */
  "id2Coord",                          /* fcnName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 45,  /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 55,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 35,  /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 64,  /* lineNo */
  "fltpower",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 40,  /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 124, /* lineNo */
  "scalar_float_power",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 60,    /* lineNo */
  18,                                  /* colNo */
  "fprintf",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 92,/* lineNo */
  5,                                   /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 4, /* lineNo */
  2,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 4, /* lineNo */
  15,                                  /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  16,                                  /* lineNo */
  5,                                   /* colNo */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 55,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 12,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  9,                                   /* colNo */
  "G",                                 /* aName */
  "RBFMatrix",                         /* fName */
  "C:\\Users\\Filippo Badalamenti\\Desktop\\Uni\\OSC\\OSC 1\\osc1-2\\1_OSC1\\PongAI\\RBFMatrix.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo q_emlrtRSI = { 60,  /* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2019a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

/* Function Declarations */
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void id2Coord(const emlrtStack *sp, real_T id, real_T *i1, real_T *i2,
                     real_T *i3, real_T *i4, real_T *i5);

/* Function Definitions */
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 3, pArrays, "feval", true, location);
}

static void id2Coord(const emlrtStack *sp, real_T id, real_T *i1, real_T *i2,
                     real_T *i3, real_T *i4, real_T *i5)
{
  real_T N[5];
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  static const char_T u[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  real_T id0;
  const mxArray *m1 = NULL;
  const mxArray *m2 = NULL;
  int32_T j;
  const mxArray *m3;
  static const int32_T iv1[2] = { 1, 42 };

  real_T b_I[5];
  real_T r;
  static const char_T b_u[42] = { '[', 'c', 'e', 'n', 't', 'e', 'r', 'I', 'd',
    ']', '\\', 't', '\\', 't', '#', '#', '#', ' ', 'i', 'n', 'd', 'e', 'x', ' ',
    'o', 'u', 't', ' ', 'o', 'f', ' ', 'r', 'a', 'n', 'g', 'e', ' ', '#', '#',
    '#', '\\', 'n' };

  const mxArray *m4 = NULL;
  boolean_T rEQ0;
  real_T q;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* Seguiamo l'algoritmo row-major */
  /* https://en.wikipedia.org/wiki/Row-_and_column-major_order */
  st.site = &i_emlrtRSI;
  b_st.site = &k_emlrtRSI;
  if (id > velSig * velSig * 7.0 * Hn * Ln) {
    st.site = &j_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(&b_st, 7, m0, &u[0]);
    emlrtAssign(&y, m0);
    emlrtAssign(&m1, y);
    emlrtAssign(&m2, emlrt_marshallOut(1.0));
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&b_st, 42, m3, &b_u[0]);
    emlrtAssign(&y, m3);
    emlrtAssign(&m4, y);
    emlrt_synchGlobalsToML(&b_st);
    c_st.site = &q_emlrtRSI;
    id0 = emlrt_marshallIn(&c_st, feval(&c_st, emlrtAlias(m1), emlrtAlias(m2),
      emlrtAlias(m4), &emlrtMCI), "<output of feval>");
    emlrt_synchGlobalsFromML(&b_st);
    emlrtDestroyArray(&m1);
    emlrtDestroyArray(&m2);
    emlrtDestroyArray(&m4);
    emlrtDisplayR2012b(emlrt_marshallOut(id0), "ans", &emlrtRTEI, sp);
  }

  N[0] = velSig;
  N[1] = velSig;
  N[2] = 7.0;
  N[3] = Hn;
  N[4] = Ln;
  id0 = id - 1.0;

  /* effettuiamo lo spostamento dalla mentalità di Matlab a quella matematica */
  for (j = 0; j < 5; j++) {
    r = id0;
    if (N[j] == 0.0) {
      if (id0 == 0.0) {
        r = N[j];
      }
    } else if (muDoubleScalarIsNaN(id0) || muDoubleScalarIsNaN(N[j]) ||
               muDoubleScalarIsInf(id0)) {
      r = rtNaN;
    } else if (id0 == 0.0) {
      r = 0.0 / N[j];
    } else if (muDoubleScalarIsInf(N[j])) {
      if ((N[j] < 0.0) != (id0 < 0.0)) {
        r = N[j];
      }
    } else {
      r = muDoubleScalarRem(id0, N[j]);
      rEQ0 = (r == 0.0);
      if ((!rEQ0) && (N[j] > muDoubleScalarFloor(N[j]))) {
        q = muDoubleScalarAbs(id0 / N[j]);
        rEQ0 = (muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) <=
                2.2204460492503131E-16 * q);
      }

      if (rEQ0) {
        r = N[j] * 0.0;
      } else {
        if ((id0 < 0.0) != (N[j] < 0.0)) {
          r += N[j];
        }
      }
    }

    b_I[j] = r;
    id0 = (id0 - r) / N[j];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  *i5 = b_I[0] + 1.0;
  *i4 = b_I[1] + 1.0;
  *i3 = b_I[2] + 1.0;
  *i2 = b_I[3] + 1.0;
  *i1 = b_I[4] + 1.0;
}

void RBFMatrix(const emlrtStack *sp, emxArray_real_T *G)
{
  emxArray_int8_T *b_I;
  real_T fullk;
  real_T b_fullk;
  int32_T m_tmp;
  int32_T i1;
  int32_T loop_ub;
  int32_T n;
  int32_T i;
  emxArray_real_T *b_G;
  real_T i2;
  real_T i3;
  real_T i4;
  real_T i5;
  real_T C1[5];
  int32_T c_G[2];
  int32_T b_i2;
  int32_T c_I[2];
  int32_T j;
  uint32_T b_j;
  real_T b_i1[5];
  real_T z1[5];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int8_T(sp, &b_I, 2, &g_emlrtRTEI, true);
  st.site = &emlrtRSI;
  fullk = Ln * Hn * 7.0 * velSig * velSig;
  b_st.site = &e_emlrtRSI;
  if (fullk < 0.0) {
    fullk = 0.0;
  }

  c_st.site = &g_emlrtRSI;
  if ((fullk != muDoubleScalarFloor(fullk)) || muDoubleScalarIsInf(fullk) ||
      (fullk > 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &i_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }

  if (fullk <= 0.0) {
    b_fullk = 0.0;
  } else {
    b_fullk = fullk;
  }

  if (!(b_fullk <= 2.147483647E+9)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      "Coder:MATLAB:pmaxsize", 0);
  }

  m_tmp = (int32_T)fullk;
  i1 = b_I->size[0] * b_I->size[1];
  b_I->size[0] = m_tmp;
  b_I->size[1] = m_tmp;
  emxEnsureCapacity_int8_T(&st, b_I, i1, &b_emlrtRTEI);
  loop_ub = m_tmp * m_tmp;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_I->data[i1] = 0;
  }

  if (m_tmp > 0) {
    b_st.site = &f_emlrtRSI;
    if (m_tmp > 2147483646) {
      c_st.site = &h_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (loop_ub = 0; loop_ub < m_tmp; loop_ub++) {
      b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1;
    }
  }

  i1 = G->size[0] * G->size[1];
  G->size[0] = b_I->size[0];
  G->size[1] = b_I->size[1];
  emxEnsureCapacity_real_T(sp, G, i1, &c_emlrtRTEI);
  loop_ub = b_I->size[0] * b_I->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    G->data[i1] = b_I->data[i1];
  }

  if ((b_I->size[0] == 0) || (b_I->size[1] == 0)) {
    n = 0;
  } else {
    n = muIntScalarMax_sint32(b_I->size[0], b_I->size[1]);
  }

  for (i = 0; i <= n - 2; i++) {
    st.site = &b_emlrtRSI;
    id2Coord(&st, 1.0 + (real_T)i, &fullk, &i2, &i3, &i4, &i5);

    /*   %Xball center */
    /*   %Yball center */
    /*       %Ybarr center */
    /*      %VxBall center */
    /*       %VyBall center */
    C1[0] = fullk / Ln * L;
    C1[1] = i2 / Hn * H;
    C1[2] = i3 / 7.0 * V[6];
    C1[3] = i4 - 2.0;
    C1[4] = i5 - 2.0;
    if ((G->size[0] == 0) || (G->size[1] == 0)) {
      m_tmp = 0;
    } else {
      m_tmp = muIntScalarMax_sint32(G->size[0], G->size[1]);
    }

    i1 = m_tmp - i;
    for (j = 0; j <= i1 - 2; j++) {
      b_j = ((uint32_T)i + j) + 2U;
      st.site = &c_emlrtRSI;
      id2Coord(&st, b_j, &fullk, &i2, &i3, &i4, &i5);

      /*   %Xball center */
      /*   %Yball center */
      /*       %Ybarr center */
      /*      %VxBall center */
      /*       %VyBall center */
      /*          fprintf("C_%d,%d - C_%d,%d = (%d-%d)[(%d,%d)(%d,%d)]\n",i1,i2,j1,j2,i,j,C1(1),C1(2),C2(1),C2(2)); */
      b_i1[0] = fullk / Ln * L;
      b_i1[1] = i2 / Hn * H;
      b_i1[2] = i3 / 7.0 * V[6];
      b_i1[3] = i4 - 2.0;
      b_i1[4] = i5 - 2.0;
      for (loop_ub = 0; loop_ub < 5; loop_ub++) {
        fullk = C1[loop_ub] - b_i1[loop_ub];
        b_i1[loop_ub] = fullk;
        z1[loop_ub] = fullk * fullk;
      }

      fullk = (((z1[0] + z1[1]) + z1[2]) + z1[3]) + z1[4];
      st.site = &d_emlrtRSI;
      b_st.site = &k_emlrtRSI;
      c_st.site = &l_emlrtRSI;
      d_st.site = &n_emlrtRSI;
      e_st.site = &o_emlrtRSI;
      f_st.site = &p_emlrtRSI;
      if (fullk < 0.0) {
        emlrtErrorWithMessageIdR2018a(&f_st, &k_emlrtRTEI,
          "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3,
          4, 4, "sqrt");
      }

      b_i2 = G->size[0];
      m_tmp = 1 + i;
      if ((m_tmp < 1) || (m_tmp > b_i2)) {
        emlrtDynamicBoundsCheckR2012b(m_tmp, 1, b_i2, &emlrtBCI, sp);
      }

      b_i2 = G->size[1];
      if (((int32_T)b_j < 1) || ((int32_T)b_j > b_i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, b_i2, &emlrtBCI, sp);
      }

      G->data[(m_tmp + G->size[0] * ((int32_T)b_j - 1)) - 1] = muDoubleScalarExp
        (-beta * muDoubleScalarSqrt(fullk));

      /*          G(i,j) = exp(-beta*norm(C1-C2)); */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxInit_real_T(sp, &b_G, 2, &d_emlrtRTEI, true);
  i1 = b_G->size[0] * b_G->size[1];
  b_G->size[0] = G->size[1];
  b_G->size[1] = G->size[0];
  emxEnsureCapacity_real_T(sp, b_G, i1, &d_emlrtRTEI);
  loop_ub = G->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    m_tmp = G->size[1];
    for (b_i2 = 0; b_i2 < m_tmp; b_i2++) {
      b_G->data[b_i2 + b_G->size[0] * i1] = G->data[i1 + G->size[0] * b_i2];
    }
  }

  c_G[0] = G->size[0];
  c_G[1] = G->size[1];
  emlrtSizeEqCheckNDR2012b(c_G, *(int32_T (*)[2])b_G->size, &emlrtECI, sp);
  c_G[0] = G->size[0];
  c_G[1] = G->size[1];
  c_I[0] = b_I->size[0];
  c_I[1] = b_I->size[1];
  if ((c_G[0] != c_I[0]) || (c_G[1] != c_I[1])) {
    emlrtSizeEqCheckNDR2012b(&c_G[0], &c_I[0], &emlrtECI, sp);
  }

  i1 = b_G->size[0] * b_G->size[1];
  b_G->size[0] = G->size[0];
  b_G->size[1] = G->size[1];
  emxEnsureCapacity_real_T(sp, b_G, i1, &e_emlrtRTEI);
  loop_ub = G->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    m_tmp = G->size[0];
    for (b_i2 = 0; b_i2 < m_tmp; b_i2++) {
      b_G->data[b_i2 + b_G->size[0] * i1] = (G->data[b_i2 + G->size[0] * i1] +
        G->data[i1 + G->size[0] * b_i2]) - (real_T)b_I->data[b_i2 + b_I->size[0]
        * i1];
    }
  }

  emxFree_int8_T(&b_I);
  i1 = G->size[0] * G->size[1];
  G->size[0] = b_G->size[0];
  G->size[1] = b_G->size[1];
  emxEnsureCapacity_real_T(sp, G, i1, &f_emlrtRTEI);
  loop_ub = b_G->size[0] * b_G->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    G->data[i1] = b_G->data[i1];
  }

  emxFree_real_T(&b_G);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (RBFMatrix.c) */
