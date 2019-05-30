#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ara[m] = {0};
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(y<x) swap(y,x);
        for(int i=x-1; i<=y-1; i++)
            ara[i] = 1;
    }
    int count = 0;
    for(int i=0; i<m; i++) {
        if (ara[i] == 0)
            count++;
    }
    cout << count << endl;
    for(int i=0; i<m; i++)
        if(ara[i]==0)
            cout << i+1 << " ";
    return 0;
}
