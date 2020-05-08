#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;  queue <int> v;
    while (scanf("%d", &x) && x != 42)
        v.push(x);
    while (!v.empty()) {
        printf("%d\n", v.front());
        v.pop();
    }
    return 0;
}