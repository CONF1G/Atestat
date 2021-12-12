#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere.in");

int main()
{
    int n,i,j,poz,ct,maxi=0,a[101];

    fin>>n;
    for(i=1; i<=n; i++)
        fin>>a[i];

    for(i=1; i<=n; i++)
    {
        ct=0;

        for(j=i; j<=n; j++)
        {
            if(a[i]==a[j])
                ct++;
            else
                break;

        }
        if(maxi<ct)
        {
            maxi=ct;
            poz=i;
        }
    }

    cout<<"Pozitia de inceput este "<<poz<<" iar lungimea este "<<maxi;

    return 0;
}
