#ifndef SOLUTII_H_INCLUDED
#define SOLUTII_H_INCLUDED
#include "functii.h"




void solutie27()
{
    int n,m;
    char v[100], a[100][100];
    citireVector(v,n,m);
    matriceChar(v,a,n,m);
    afisareMatriceChar(a,n,m);
}


void solutie24()
{
    int n,m,v[100][100];
    int s;
    citireMatrice(v,n,m);
    s=sumaNumere(v,n,m);
    afisareSuma(s);
}
#endif // SOLUTII_H_INCLUDED
