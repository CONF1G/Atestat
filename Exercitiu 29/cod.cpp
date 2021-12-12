
#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,ct=0,nr=1;
    cin>>n>>m;
    int a[n+1],b[m+1];
    if(n-m!=2)
    {
        cout<<"NU";
        return 0;
    }
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(j=1; j<=m; j++)
        cin>>b[j];

    for(j=1; j<=m; j++)
    {
        for(i=nr; i<=n; i++)
        {
            if(b[j]==a[i])
            {
                ct++;
                nr=i;
                break;
            }
        }
    }
    if(ct==m)
        cout<<"DA";
    else
        cout<<"nu";
    return 0;
}
