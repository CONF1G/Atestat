#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("nume.in");
ofstream fout("nume.out");
int main()
{

    int n,i,j,m;
    char a[102][102],ch[102];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ch;
        strcpy(a[i],ch);
    }
    bool ordonat=0;
    while (ordonat==0)
    {
        ordonat=1;
        for(i=1; i<n; i++)
        {
            if(strcmp(a[i],a[i+1])>0)
            {
                strcpy(ch,a[i]);
                strcpy(a[i],a[i+1]);
                strcpy(a[i+1],ch);
                ordonat=0;
            }
        }
    }
    for(i=1; i<=n; i++)
        cout<<a[i]<<endl;
    return 0;
}
