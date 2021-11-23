#include <iostream>
#include <fstream>
using namespace std;

fstream fin("numere.in"); 
fstream fout("numere.out");

int main()
{
    int a[101],i,n,maxi,aux;//initializare
   
    fin>>n; //citim numarul de elemente
    
    for(i=1; i<=n; i++)
    {
        fin>>a[i]; //citim enementele din vector
    }

    maxi=aux=a[1];//initializam valoarea maxima
    
    for(i=2; i<=n; i++)
    {
        if(a[i]>maxi)// verificam valoarea maxima;
        {
            aux=maxi; //inlocuim in aux valoarea imediat mai mica 
            maxi=a[i]; //inlocuim valoarea maxima
        }
    }
    fout<<"Valoarea maxima:"<<maxi; //afisare valoare maxima
    fout<<"\n";
    fout<<"Valoarea imediat mai mica:"<<aux; //afisam valoare imediat mai mica


    return 0;
}
