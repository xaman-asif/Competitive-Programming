#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, i, sum = 0, nsum = 0;
    cin >> n;
    int ara[n];
    for(i=0; i<n; i++){
        cin >> ara[i];
        sum += ara[i];
    }
    sum /= 2;
    sort(ara,ara+n);
    reverse(ara,ara+n);
    for(i=0; !(nsum>sum); i++)
        nsum += ara[i];
    cout << i << endl;
    return 0;
}
