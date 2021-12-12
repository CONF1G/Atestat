#include <iostream>
using namespace std;

int main()
{

    int n,k,v[101],a[10001],i;

    cin>>n>>k;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        v[a[i]]++;
    }

    for(i=1; i<=100; i++)
        if(v[i]>=k)
            cout<<i<<" ";



    return 0;
}
