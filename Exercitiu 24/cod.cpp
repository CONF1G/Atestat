#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int c[2001];
int main()
{
    int m,n,i,j,p,a[1001],b[1001];
    cin>>m>>n;
    for(i=1; i<=m; i++)
        cin>>a[i];
    for(j=1; j<=n; j++)
        cin>>b[j];

    i=1;
    j=1;
    p=1;

    while(i<=m && j<=n)
    {
        if(a[i]<b[j])
        {
            if(  c[p-1]!=a[i])
            {
                c[p]=a[i];
                p++;
            }
            i++;

        }

        if(b[j]<a[i] )
        {
            if( c[p-1]!=b[j])
            {
                c[p]=b[j];
                p++;
            }
            j++;
        }

        if(a[i]==b[j])
        {
            j++;
        }

    }

    while(i<=m)
    {
        if(a[i]!=c[p-1])
        {
            c[p]=a[i];
            p++;
        }
        i++;
    }

    while(j<=n)
    {
        if(b[j]!=c[p-1])
        {
            c[p]=b[j];
            p++;
        }
        j++;
    }

    for(int k=1; k<=p-1; k++)
    {
        cout<<c[k]<<" ";
    }



    return 0;
}
