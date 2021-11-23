#include <iostream>
#include <fstream>
using namespace std;

fstream fin("sir.in"); 
fstream fout("sir.out");

int main()
{
    int x,a[101],b[101],i,n;//initializare
    bool ok=0; //initializare verificare introducere nr in sir
    fin>>n; //numarul de elemente din vector
    
    for(i=1; i<=n; i++)
    {
        cin>>a[i]; //elementele din vector
        b[i]=a[i]; //copie vector
    }
    fin>>x; //citire nr
    for(i=1; i<=n+1; i++)
    {
        if(a[i]>x && ok!=1)// verificare nr si introducerea lui in sir 
        {
            a[i]=x;
            ok=1;
        }
        if(ok==1)
        {
            a[i+1]=b[i];//copierea numerelor din sir dupa adaugarea lui x
        }
    }


for(i=1; i<=n+1; i++)
{
    fout<<a[i]<<" "; // afisarea vectorului

}
return 0;
}
