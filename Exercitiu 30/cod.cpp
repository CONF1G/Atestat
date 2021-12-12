
#include <iostream>

using namespace std;

int main()
{
    int n,nr1=1,nr2=1,c;

    cin>>n;

    while(c<=n)
    {
        c=nr1+nr2;
        nr1=nr2;
        nr2=c;
    }
    if(nr1==n)
        cout<<nr1<<" este termen al sirului Fibonacci";
    else
        cout<<nr1<<" nu este termen al sirului Fibonacci";


    return 0;
}
