#ifndef FUNCTII_H_INCLUDED
#define FUNCTII_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;


void citireMatrice(int v[100][100], int&n, int&m)
{
    ifstream read("data.txt");
    read>>n;
    read>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            read>>v[i][j];
        }
    }
}


void afisareMatrice(int v[100][100], int n , int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}

void citireVector(char v[], int&n , int&m)
{
    ifstream read("vector.txt");
    read>>n;
    read>>m;
    for(int i=0; i<n*m; i++)
    {
        read>>v[i];
    }
}


void afisareVectorCaractere(char v[], int n , int m)
{
    for(int i=0; i<n*m; i++)
    {
        cout<<v[i]<<" ";
        cout<<endl;
    }
}
//

//problema 27
// 3 3
//56 85 29
//24 64 26
//46 76 23


//34 65 76 89 54 13 54 86 45    -    5
//i<n    j<m       a[i][j]    k
//0<3    0<3          34      1
//       1<3          65      2
//       2<3          76      3
//       3<3 NU
//1<3    0<3
void matriceChar(char v[], char a[100][100], int n , int m)
{
    int k=0;
    for(int i=0; i<n&&k<=n*m; i++)
    {
        for(int j=0; j<m; j++)
        {

                a[i][j]=v[k];
                k++;

        }
    }
}


void afisareMatriceChar(char a[100][100], int n , int m)
{
    for(int i =0 ; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

//
int  formareNumar(int a[100][100], int linie, int m )
{
    int nr=0;
    for(int j=0 ; j<m; j++)
    {
        nr=nr*10+a[linie][j];
    }
    return nr;
}


int sumaNumere(int a[100][100], int n , int m )
{
    int s=0;
    for(int i=0 ; i<n; i++)
    {
      s=s+formareNumar(a,i,m);
    }
    return s;
}

void afisareSuma(int s)
{
    int v[30], k=0;
    while(s!=0)
    {
        v[k]=s%10;
        s=s/10;
        k++;
    }
    for(int i=k-1; i>=0; i--)
    {
        cout<<v[i];

        if(i!=0)
        {
            cout<<",";
        }
    }
}
#endif // FUNCTII_H_INCLUDED
