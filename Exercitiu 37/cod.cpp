#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int n,m=0,nn,p=10,i,j;

    cin>>n;

    nn=n;

    while(nn%10!=0 || nn%100!=0)
    {
        m++;
        nn/=10;
    }
    int a[m+1][m+1];

    for(j=1; j<=m; j++)
    {

        for(i=1; i<=m; i++)
        {
            a[i][j]=n%p;
        }
        n=n/10;
    }

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
