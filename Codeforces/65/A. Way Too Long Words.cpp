#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        char str[101];
        cin >> str;
        int l = strlen(str);
        if(l <= 10) cout << str << endl;
        else{
            cout << str[0] << l-2 << str[l-1] << endl;
        }
    }
    return 0;
}
