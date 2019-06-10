#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <long long> ara;
    long long t;
    while(scanf("%lld", &t) != EOF)
    {
        ara.push_back(t);
    }
    for(int i=ara.size()-1; i>=0; i--)
    {
        cout << fixed << setprecision(4) << sqrt(ara[i]) << endl;
    }

    return 0;
}
