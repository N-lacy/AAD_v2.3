#pragma once

#include <windows.h>
#include <iostream>

#define COL 7
#define ROW 13
#define LEN 20

void AAD(int screen[LEN][ROW][COL], int num);
void selector(char a[]);
void copier(int i, int letter[ROW][COL]);

int num;
int A[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1} };
int B[ROW][COL] = { {1,1,1,1,0,0,0},{1,1,1,1,1,0,0},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,0},{1,1,1,1,1,0,0},{1,1,1,1,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,0},{1,1,1,1,0,0,0} };
int C[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0} };
int D[ROW][COL] = { {1,1,1,1,1,0,0},{1,1,1,1,1,1,0},{1,1,1,1,1,1,1},{0,1,1,0,1,1,1},{0,1,1,0,1,1,1},{0,1,1,0,1,1,1},{0,1,1,0,1,1,1},{0,1,1,0,1,1,1},{0,1,1,0,1,1,1},{0,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,0},{1,1,1,1,1,0,0} };
int E[ROW][COL] = { {1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,0,0,1},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,1,1,0},{1,1,1,1,1,1,0},{1,1,1,0,1,1,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1} };
int F[ROW][COL] = { {1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,0,0,1},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,1,1,0},{1,1,1,1,1,1,0},{1,1,1,0,1,1,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,1,0,0,0} };
int G[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,1,1,1},{1,1,1,0,0,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0} };
int H[ROW][COL] = { {1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1} };
int I[ROW][COL] = { {1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,0,1,1,1,0,1},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{1,0,1,1,1,0,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1} };
int J[ROW][COL] = { {1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,0,1,1,1,0,1},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{1,0,1,1,1,0,0},{1,1,1,1,1,0,0},{1,1,1,1,1,0,0},{0,1,1,1,0,0,0} };
int K[ROW][COL] = { {1,1,1,0,0,1,1},{1,1,1,0,0,1,1},{1,1,1,0,0,1,1},{1,1,1,0,1,1,0},{1,1,1,0,1,1,0},{1,1,1,0,1,0,0},{1,1,1,1,1,0,0},{1,1,1,1,1,1,0},{1,1,1,1,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,0,1,1} };
int L[ROW][COL] = { {1,1,1,1,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1} };
int M[ROW][COL] = { {1,1,0,0,0,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,0,1,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1} };
int N[ROW][COL] = { {1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,1,0,0,1,1},{1,1,1,0,0,1,1},{1,1,1,1,0,1,1},{1,1,1,1,0,1,1},{1,1,1,1,1,1,1},{1,1,0,1,1,1,1},{1,1,0,1,1,1,1},{1,1,0,0,1,1,1},{1,1,0,0,1,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1} };
int O[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0} };
int P[ROW][COL] = { {1,1,1,1,1,0,0},{1,1,1,1,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,0,1,1},{1,1,1,0,0,1,1},{1,1,1,0,1,1,0},{1,1,1,1,1,0,0},{1,1,1,1,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,1,0,0,0} };
int Q[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{0,1,1,1,1,1,0},{0,0,1,1,0,1,1} };
int R[ROW][COL] = { {1,1,1,1,1,0,0},{1,1,1,1,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,0,1,1},{1,1,1,0,0,1,1},{1,1,1,0,1,1,0},{1,1,1,1,1,0,0},{1,1,1,1,0,0,0},{1,1,1,1,1,0,0},{1,1,1,0,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,0,1,1},{1,1,1,0,0,1,1} };
int S[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,0,1,1},{1,1,1,0,0,0,1},{0,1,1,1,0,0,0},{0,0,1,1,1,0,0},{0,0,0,1,1,1,0},{1,0,0,0,1,1,1},{1,1,0,0,1,1,1},{1,1,1,0,1,1,1},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0} };
int T[ROW][COL] = { {1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,0,1,1,1,0,1},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,1,1,1,1,1,0} };
int U[ROW][COL] = { {1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,1,1,1,1,1,0} };
int V[ROW][COL] = { {1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{0,1,1,0,1,1,0},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0},{0,0,0,1,0,0,0} };
int W[ROW][COL] = { {1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,0,1,0,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,0,1,1,1},{1,1,0,0,0,1,1} };
int X[ROW][COL] = { {1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{0,1,1,0,1,1,0},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{0,1,1,0,1,1,0},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1} };
int Y[ROW][COL] = { {1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{1,1,1,0,1,1,1},{0,1,1,0,1,1,0},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0} };
int Z[ROW][COL] = { {1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,0,0,0,1,1,1},{0,0,0,0,1,1,1},{0,0,0,1,1,1,0},{0,0,0,1,1,1,0},{0,0,1,1,1,0,0},{0,1,1,1,0,0,0},{0,1,1,1,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1} };
int _space[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };
int _unederscore[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1} };
int _dash[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };
int _plus[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };
int _fslash[ROW][COL] = { {0,0,0,0,0,1,1},{0,0,0,0,1,1,1},{0,0,0,0,1,1,1},{0,0,0,1,1,1,0},{0,0,0,1,1,1,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,1,1,1,0,0,0},{0,1,1,1,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{1,1,0,0,0,0,0} };
int _bslash[ROW][COL] = { {1,1,0,0,0,0,0},{1,1,1,0,0,0,0},{1,1,1,0,0,0,0},{0,1,1,1,0,0,0},{0,1,1,1,0,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,0,1,1,1,0},{0,0,0,1,1,1,0},{0,0,0,0,1,1,1},{0,0,0,0,1,1,1},{0,0,0,0,0,1,1} };
int _astrix[ROW][COL] = { {0,1,0,1,0,1,0},{0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{0,0,1,1,1,0,0},{0,1,0,1,0,1,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };
int _period[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0} };
int _comma[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,1,1,0,0,0,0} };
int _exclamation[ROW][COL] = { {0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,0,0,1,0,0,0},{0,0,0,0,0,0,0},{0,0,0,1,0,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0} };
int _qmark[ROW][COL] = { {0,0,1,1,1,0,0},{0,1,1,1,1,1,0},{1,1,1,0,1,1,1},{1,1,0,0,0,1,1},{1,1,0,0,0,1,1},{0,0,0,0,1,1,1},{0,0,0,0,1,1,0},{0,0,0,1,1,0,0},{0,0,0,1,0,0,0},{0,0,0,0,0,0,0},{0,0,0,1,0,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0} };
int _equals[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,0,0,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,1,1,1},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };
int _scolon[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,1,1,0,0,0,0} };
int _colon[ROW][COL] = { {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0},{0,1,1,1,1,0,0} };
int _apostrophe[ROW][COL] = { {0,0,1,1,1,0,0},{0,0,1,1,1,0,0},{0,1,1,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };
int _icomma[ROW][COL] = { {0,1,1,0,1,1,0},{0,1,1,0,1,1,0},{1,0,0,1,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0} };

int screen[LEN][ROW][COL];

void selector(char a[])
{
    int i, num = 0;
    for (i = 0; i < 100; i++)
    {
        if (a[i] != '0')
            num++;
        else
            break;
    }
    for (i = 0; i < num; i++)
    {
        switch (a[i])
        {
        case 'A':
            copier(i, A);
            break;
        case 'B':
            copier(i, B);
            break;
        case 'C':
            copier(i, C);
            break;
        case 'D':
            copier(i, D);
            break;
        case 'E':
            copier(i, E);
            break;
        case 'F':
            copier(i, F);
            break;
        case 'G':
            copier(i, G);
            break;
        case 'H':
            copier(i, H);
            break;
        case 'I':
            copier(i, I);
            break;
        case 'J':
            copier(i, J);
            break;
        case 'K':
            copier(i, K);
            break;
        case 'L':
            copier(i, L);
            break;
        case 'M':
            copier(i, M);
            break;
        case 'N':
            copier(i, N);
            break;
        case 'O':
            copier(i, O);
            break;
        case 'P':
            copier(i, P);
            break;
        case 'Q':
            copier(i, Q);
            break;
        case 'R':
            copier(i, R);
            break;
        case 'S':
            copier(i, S);
            break;
        case 'T':
            copier(i, T);
            break;
        case 'U':
            copier(i, U);
            break;
        case 'V':
            copier(i, V);
            break;
        case 'W':
            copier(i, W);
            break;
        case 'X':
            copier(i, X);
            break;
        case 'Y':
            copier(i, Y);
            break;
        case 'Z':
            copier(i, Z);
            break;
        case ' ':
            copier(i, _space);
            break;
        case '_':
            copier(i, _unederscore);
            break;
        case '-':
            copier(i, _dash);
            break;
        case '+':
            copier(i, _plus);
            break;
        case '/':
            copier(i, _fslash);
            break;
        case '\\':
            copier(i, _bslash);
            break;
        case '*':
            copier(i, _astrix);
            break;
        case '.':
            copier(i, _period);
            break;
        case ',':
            copier(i, _comma);
            break;
        case '!':
            copier(i, _exclamation);
            break;
        case '?':
            copier(i, _qmark);
            break;
        case '=':
            copier(i, _equals);
            break;
        case ';':
            copier(i, _scolon);
            break;
        case ':':
            copier(i, _colon);
            break;
        case '\'':
            copier(i, _apostrophe);
            break;
        case '"':
            copier(i, _icomma);
            break;

        default:
            std::cout << "\ninvalid input";
            break;
        }
    }
    AAD(screen, num);
}

void AAD(int screen[LEN][ROW][COL], int num)
{
    std::cout << "\nPrint in AAD\n\n";
    int i, j, k;
    for (j = 0; j < ROW; j++)
    {
        for (i = 0; i < num; i++)
        {
            for (k = 0; k < COL; k++)
            {
                if (screen[i][j][k] == 1)
                {
                    std::cout << "*";
                    Sleep(5);
                }
                else
                    std::cout << " ";
            }
            std::cout << "\t";
        }
        Sleep(50);
        std::cout << "\n";
    }
}


inline void copier(int i,int letter[ROW][COL])
{
    for (int j = 0; j < ROW; j++)
        for (int k = 0; k < COL; k++)
            screen[i][j][k] = letter[j][k];
}

