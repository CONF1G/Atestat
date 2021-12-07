#include <iostream>
using namespace std;
int main()
{
    int n,prod=2,i;
    bool ok=1;
    cin>>n;
    for(i=3; i<=n; i+=2)
    {
        if(prod*i==n)
        {
            cout<<"DA";
            ok=0;
            break;
        }
        else
        {
            prod=i;
        }
    }
    if(ok==1)
    {
        cout<<"NU";
    }
    return 0;
}
