#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



int main()
{
    int n,a[101][101],i,j,nr=2;

    cin>>n;

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {

            a[i][j]=nr;
            nr+=2;
        }

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
        {

            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
