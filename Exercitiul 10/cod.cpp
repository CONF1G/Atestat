#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

int main()
{
    int n,m,i,j,a[101],b[101],c[202],p;

    din>>n>>m;
    for(i=1; i<=n; i++)
    {
        fin>>a[i];
    }
    for(i=1; i<=m; i++)
    {
        fin>>b[i];
    }

    i = 1;
    j = 1;
    p = 1;
    while(i <= n && j <= m)
    {
      if (a[i]>b[j])
        {
            c[p]=b[j];
            j++;
            p++;
        }
        else
        {

            c[p]=a[i];
            i++;
            p++;

        }
    }
    while(i <= n)
    {
        c[p] = a[i];
        i++;
        p++;
    }
    while(j <= m)
    {
        c[p] = b[j];
        j++;
        p++;
    }

    for(i=1; i<=m+n; i++)
    {
        fout<<c[i]<<" ";
    }

    return 0;
}
