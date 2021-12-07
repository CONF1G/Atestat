#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,a[101],b[101];
    cin>>n>>m;

    for(i=1; i<=n; i++
            cin>>a[i];

            for(j=1; j<=m; j++)
                cin>>b[j];

                for(i=1; i<=m+n; i++)
        {
            for(j=1; j<=m+n; j++)
                {
                    if(a[j]==i || b[j]==i)
                    {
                        c[i]+=1;
                    }
                }
            }

    return 0;
}
