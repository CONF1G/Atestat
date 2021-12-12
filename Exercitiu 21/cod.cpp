#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("cuvant.in");
 char a[101],b[101];
int main()
{
    int i,p=0,ct=0;

    cin>>a;
    while(a[p]!=NULL)
    {
        ct++;
        p++;
    }
    p=0;
      for(i=ct-1; i>=0; i--)
    {
        b[p]=a[i];
        p++;
    }

    if(strcmp(a,b)==0)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
