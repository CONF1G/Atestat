#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("palin.txt");

int palindrom (int x)
{
    int i;
    int xx=x;
    int y=0;
    while(x!=0)
    {
        y=y*10+x%10;
        x/=10;
    }
    if(xx==y)
    {
        return 1;
    }
    else
        return 0;
}



int main()
{
    int a,b,i;

    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        if(palindrom(i)==1)
        {
            fout<<i<<" ";
        }

    }
    return 0;
}
