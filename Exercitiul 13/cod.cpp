#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.in");
int a[100];
int main()
{
    int n,x,p,i,cifra,nr;

    fin>>n;
    for(i=1; i<=n; i++)
    {
    fin>>nr;

        a[nr]++;
    }
    int maxx=0;
    for(nr=1; nr<100; nr++)
    {
        if(maxx<a[nr])
        {
            maxx=a[nr];
            p=nr;
        }
    }

    cout<<"Numărul care apare cel mai des este"<<" "<<p;

    return 0;
}
