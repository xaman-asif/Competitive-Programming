#include <bits/stdc++.h>
using namespace std;

int main()
{
    //the line need not to be horizontal or vertical
    long long w, h, x, y;
    scanf("%lld %lld %lld %lld", &w, &h, &x, &y);
    printf("%0.15Lf %d\n", (long double) (w*h)/2.0, (w==x*2 && h==y*2));
    return 0;
}
