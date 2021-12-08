#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("date.in");

int main()
{
    int n,x,prod=1,p,k=0,i;

    fin>>n;

    for(i=1; i<=n; i++)
    {
        fin>>x;
        prod*=x;
    }
    fin>>p;
    while(prod%p==0)
    {
        k++;
        prod/=p;
    }
    cout<<"k="<<" "<<k;


    return 0;
}
