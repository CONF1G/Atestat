#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[40];
    int i=0,ct=0,j;
    cin>>a;
    while(a[i]!=NULL)
    {
        ct++;
        i++;
    }
    for(i=0; i<ct; i++)
    {
        for(j=0; j<=ct; j++)
        {
            if(i!=j) cout<<a[j];
        }
        cout<<'\n';
    }
    return 0;
}
