#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cifre.in");
ofstream fout("cifre.out");


int a[9];

int main()
{
    int nr,i=9;

    fin>>nr;

    while(nr!=0)
    {
        a[nr%10]++;
        nr/=10;
    }
    while (i!=0)
    {
        while(a[i]!=0)
        {
            fout<<i;
            a[i]-=1;
        }
        i--;
    }
    return 0;
}
