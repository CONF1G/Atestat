#include <iostream>

using namespace std;

int main()
{

    int n,i,st,dr,m,poz;
    float a[101],x;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>a[i];
    cin>>x;
    st=1;
    dr=n;
    poz=0;
    while( st<dr && poz==0)
    {
        m=(st+dr)/2;
        if(a[m]==x)
            poz=m;
        else
        {
            if(a[m]<x)

                st=st+1;
            else
                dr=dr-1;
        }
    }
    if(poz!=0)
        cout<<x<<" apare pe pozitia "<<poz;
    else
        cout<<x<<" nu apare in vector";
    return 0;
}
