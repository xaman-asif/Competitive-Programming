#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, t;

    cin >> n >> t;
    char que[n];
    cin >> que;
    for(int j=0; j<t; j++){
        for(int i=0; que[i]; i++){
            if(que[i]=='B' && que[i+1]=='G'){
                swap(que[i],que[i+1]);
                i++;
            }
        }
    }
    cout << que << endl;
    return 0;
}
