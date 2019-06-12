#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    char str[101];
    cin >> str;
    int ara[101], j=1;
    ara[0] = str[0] - '0';
    for(int i=0; str[i]; i++)
    {
        if(str[i]=='+')
        {
            ara[j] = str[i+1] - '0';
            j++;
        }
    }
    
    sort(ara,ara+j);

    for(int i=0; i<j; i++)
    {
        cout << ara[i];
        if(i!=j-1) cout << '+';
    }
    return 0;
}
