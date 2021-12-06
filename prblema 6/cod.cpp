#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b,aa,bb,r;
    cin>>a>>b;
    aa=a;
    bb=b;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout<<aa/a<<" "<<bb/a;
    return 0;
}
