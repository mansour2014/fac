#ifndef _IONIZATION_H_
#define _IONIZATION_H_

#include "structure.h"
#include "excitation.h"

#define QKDETAIL  0
#define QKFIT     1
#define QKLOAD    2
#define QKLOAD2   3

int FreeIonizationQk();
int InitIonization();
int SetIEGrid(int n, double emin, double emax);
int SetCIPWOptions(int qr, int max, int max_eject, int kl_cb, double tol);
int SetCIPWGrid(int ns, int *n, int *step);
int SetCIFormat(int m);
int SetCIEGrid(int n, double emin, double emax, double eth);
int SetCIEGridDetail(int n, double *x);
int SetCIFormat(int m);
int SetUsrCIEGridType(int type);
int SetUsrCIEGrid(int n, double emin, double emax, double eth);
int SetUsrCIEGridDetail(int n, double *x);
int CIRadialQk(double *qk, int ie1, int ie2, int kb, int kbp, int k);
int CIRadialQkIntegrated(double te, int kb, int kbp);
double CIRadialQkIntegratedFromFit(double x, double c[]);
double *CIRadialQkIntegratedTable(int kb, int kbp);
double IntegrateQk(double *qk);
double *CIRadialQkTable(int kb, int kbp);
int IonizeStrength(double *s, double *e, int b, int f);
int SaveIonization(int nb, int *b, int nf, int *f, char *fn);

#endif
