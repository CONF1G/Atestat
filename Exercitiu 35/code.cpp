#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[251],i;
    cin>>a;
    for(i=0; a[i]!=NULL; i++)
    {
        if(a[i]=='z')
        {
            a[i]='a';
            cout<<a[i];
            i++;
        }

            a[i]+=1;
            cout<<a[i];
    }

    return 0;
}
