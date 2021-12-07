#include <iostream>

using namespace std;

int main()
{
    int n,i,ct=0,r,a,b;


    cin>>n;
    for(i=1; i<=n; i++)
    {
        a=n;
        b=i;
        while(b!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
        if(a==1)
        {
            ct++;
        }
    }
    cout<<ct;

    return 0;
}
