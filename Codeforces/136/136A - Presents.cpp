#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++)
        cin >> ara[i];
    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(ara[j]==i)
                cout << j+1;
        }
        if(i!=n) cout << " ";
    }
    return 0;
}
