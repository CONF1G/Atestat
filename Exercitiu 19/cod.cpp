#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



int main()
{
    char a[256];
    int i,ct=0;
    cin.getline(a,256);

    for(i=0; a[i]!=NULL; i++)

    {

        if(a[i-1]!=' ' && a[i]==' ' || a[i]>='a'&&  a[i]<='z' && a[i+1]==NULL)
        {
            ct++;
        }
    }
    cout<<ct;


    return 0;
}
