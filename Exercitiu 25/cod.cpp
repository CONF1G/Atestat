#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    cin.getline(s,256);

    int l = strlen(s);
    if(s[0] != ' ' && s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;

   for(int i = 0; i < l ;i++){
        if((s[i-1] == ' ' && s[i] >= 'a' && s[i] <= 'z' ) || ( s[i+1] == ' ' && s[i] >= 'a' && s[i] <= 'z') || (s[i+1] == NULL && s[i] >= 'a' && s[i] <= 'z' ))
            s[i] -= 32;
    }

    cout << s;


    return 0;
}
