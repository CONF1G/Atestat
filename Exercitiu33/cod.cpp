#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int m,n,p,poz1,poz2,poz3,ct,a[101],b[101],c[101],i,j,k,numar;
poz1=poz2=poz3;
    cin>>m>>n>>p;

    for(i=1; i<=m; i++)
        cin>>a[i];
    for(j=1; j<=n; j++)
        cin>>b[j];
    for(k=1; k<=p; k++)
        cin>>c[k];

    for(i=1; i<=m+n+p; i++)
    {
        numar=a[i];
        poz1=i;
             ct=1;
        for(j=1; j<=m+n+p; j++)
        {
            if(a[i]==b[j])
            {
                ct++;
                poz2=j;
            }
            if(a[i]==c[j])
            {
                ct++;
                poz3=j;
            }

        }
        if(ct==3)
        {
            break;
        }
    }

    cout<<numar<<" "<<poz1<<" "<<poz2<<" "<<poz3;

    return 0;
}
