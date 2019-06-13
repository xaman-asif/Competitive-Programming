#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;
    char str[100];
    cin >> str;
    char hell[] = "hello";
    for(i=0, j=0; str[i]; i++)
    {
        if(hell[j]==str[i])
        {
            j++;
        }
    }
    if(j==5) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
