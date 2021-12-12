#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[31],i,ct=0,nr=0,j;
    cin>>a;
    while(a[nr]!=NULL)
    {
        nr++;
    }

    while(ct<=nr)
    {
        for(i=0; i<ct; i++)
        {
            cout<<a[i];
        }
        ct++;
        cout<<'\n';
    }

    return 0;
}
