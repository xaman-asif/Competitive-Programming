#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    char str[500];
    char rstr[500];
    int ri = 0;
    cin >> str;
    for(int i=0; str[i]; i++)
    {
        if(str[i] == 'a' || str[i] == 'A') continue;
        else if(str[i] == 'e' || str[i] == 'E') continue;
        else if(str[i] == 'i' || str[i] == 'I') continue;
        else if(str[i] == 'o' || str[i] == 'O') continue;
        else if(str[i] == 'u' || str[i] == 'U') continue;
        else if(str[i] == 'y' || str[i] == 'Y') continue;
        else{
            rstr[ri] = '.';
            if(str[i] >= 'a' && str[i] <= 'z') rstr[ri+1] = str[i];
            else rstr[ri+1] = str[i] - 'A' + 'a';
            ri += 2;
        }
    }
    rstr[ri] = '\0';
    cout << rstr << endl;
    return 0;
}
