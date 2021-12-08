#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream in("numere.in");
ofstream out("numere.out");
int main()
{
    int n,i,nr,a[101],j;

    in>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    in>>nr;

    for(i=1; i<=n; i++)
    {
        if(a[i]!=nr)
        {
            out<<a[i]<<" ";
        }
    }

    return 0;
}
