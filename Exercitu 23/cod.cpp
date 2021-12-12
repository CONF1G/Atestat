#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,m,a[30][30],i,j,mini;

    cin>>n>>m;

    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j];


    for(j=1; j<=m; j++)
    {
        mini=a[1][j];
        for(i=2; i<=n; i++)
        {
            if(a[i][j]< mini)
            {
                mini=a[i][j];
            }
        }
        cout<<mini<<" ";
    }

    return 0;
}
