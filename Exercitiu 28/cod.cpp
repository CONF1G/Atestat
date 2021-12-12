
#include <iostream>

using namespace std;
int a[34][34];
int main()
{
    int n,i,j;
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i>j)a[i][j]=3;
            if(i<j)a[i][j]=1;
            if(i==j)a[i][j]=2;

        }
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
