#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='.'){
            cout << 0;
            continue;
        }
        else if(str[i]=='-' && str[i+1]=='.'){
            cout << 1;
            i++;
            continue;
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            cout << 2;
            i++;
            continue;
        }
    }
    return 0;
}
