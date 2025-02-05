#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "0000" << endl;
        return 0;
    }

    int many = 0;
    int temp = n;

    while(temp) {
        temp /= 10;
        many++;
    }

    many = 4 - many;

    temp = 0;

    while(temp < many) {
        cout << 0;
        temp++;
    }

    cout << n << endl;
}