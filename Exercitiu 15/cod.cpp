#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

ifstream fin("text.in");

int main()
{
    int ct=0,i;
    char a[101];
    fin>>a;
    for(i=0;a[i]!=NULL;i++)
    {
       switch(a[i])
       {
           case'a':
           ct++;
           break;

           case'e':
           ct++;
           break;

           case 'i':
           ct++;
           break;
           
           case 'o':
           ct++;
           break;
           
           case 'u':
           ct++;
           break;

       }
    }
    cout<<ct;
    return 0;
}
