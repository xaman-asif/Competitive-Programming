#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int maximum = max(a, b);

    cout << max(maximum * 2 - 1, a + b) << endl;
}