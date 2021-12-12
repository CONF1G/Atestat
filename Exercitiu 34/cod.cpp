#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[251],i;

    cin>>a;

    for(i=0; a[i]!=NULL; i++)
    {
        if(a[i]!='a' && a[i]!='e'&& a[i]!='i' && a[i]!='o' && a[i]!='u')
        {
            cout<<a[i];
        }
    }

    return 0;
}
