#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;

    cout << __builtin_popcount(n) << endl;
}

// The above STL function is equipvalent to function written below
int count_setbits(int N)
{
    int cnt = 0;

    while (N > 0)
    {
        cnt += (N & 1);
        N = N >> 1;
    }

    return cnt;
}