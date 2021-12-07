#include <iostream>

using namespace std;

int main()
{
    int n,i,ct=0,r,a,b;


    cin>>n;

    while(n%2==0)
    {
        ct++;
        n=n/2;
    }
    cout<<2<<" "<<ct;
    cout<<endl;
    for(i=3; i<=n; i+=2)
    {
        ct=0;
        while(n%i==0)
        {
            ct++;
            n=n/i;
        }
        if(ct>0)
        {
            cout<<i<<" "<<ct;
            cout<<endl;
        }
    }


    return 0;
}
