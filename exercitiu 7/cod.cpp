#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    int i,j;
    bool ok=1;
    char a[256],lit,litr;
    cin>>a;

    for(i=0; a[i]!=NULL; i++)
    {
        lit=a[i];
        for(j=i+1; a[j]!=NULL; j++)
        {
            ok=1;
            if(a[j]==lit)
            {
                ok=0;
                break;
            }
        }
        if(ok!=0)
        {
            litr=lit;
            break;
        }
    }
    if(ok==0)
        cout<<"NU EXISTA";
    else
        cout<<litr;
    return 0;
}
