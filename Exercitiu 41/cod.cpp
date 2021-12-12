#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    int n,v[101],a[10001],i,maxi=0,summin=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        v[a[i]]++;
    }

    for(i=1; i<=100; i++)
        if(v[i]>maxi)
            maxi=i;

    for(i=1; i<=100; i++)
        if(i!=maxi)
        summin+=v[i]*i;

    cout<<maxi<<" "<<summin;




    return 0;
}
