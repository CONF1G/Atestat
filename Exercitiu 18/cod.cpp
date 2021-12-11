#include <iostream>
#include <fstream>

using namespace std;

fstream fin("matrice.in");

int main()
{
    int n,a[101][101],sum=0,i,j;

    fin>>n;

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            fin>>a[i][j];


    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i + j > n + 1)
            {
                sum+=a[i][j];
            }

    cout<<sum;


    return 0;
}
