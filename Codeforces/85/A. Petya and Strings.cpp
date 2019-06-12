#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    char str[101];
    char str2[101];

    int t = 0;

    cin >> str >> str2;
    for(int i=0; str[i]; i++){
        
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
        
        if(str2[i] >= 'A' && str2[i] <= 'Z') str2[i] += 32;

        if((str[i]-str2[i])!=0){
            if(str[i] < str2[i])
            {
                cout << -1 << endl;
                t = 9;
                break;
            }
            else
            {
                cout << 1 << endl;
                t = 9;
                break;
            }
        }
    }

    if(t==0) cout << 0 << endl;

    return 0;
}

