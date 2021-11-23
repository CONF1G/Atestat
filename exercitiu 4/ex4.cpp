#include <iostream>
#include <fstream>
using namespace std;

fstream fin("numere.in");
fstream fout("numere.out");

int main()
{
    int a[101],i,n,maxi,aux;//initializare

    while(n!=0) //repetam cat timp cifra este diferita de 0
    {
        fin>>n; //citim numerele
        aux=n; //initializam copie
        maxi=aux%10; //initializam valoare maxima
        aux=aux/10; //scoatem ultima cifra
        while(aux!=0) //repetam cat timp copia este diferita de 0
        {
            if(aux%10>maxi) //comparam cifrele 
            {
                maxi=aux%10; // actualizam maximul
            }
            aux/=10; //scoatem ultima cifra 
        }
        if(maxi!=0) 
        {
            fout<<maxi<<" "; //afisam valoarea maxima a fiecarei cifre
        }
    }
    return 0;
}
