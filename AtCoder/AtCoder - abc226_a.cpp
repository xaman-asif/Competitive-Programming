#include <bits/stdc++.h>
using namespace std;

int main() {
    float x;

    cin >> x;

    float temp = x - (int) x;
   
    if (temp < 0.5) 
    {
        cout  << ((int) x) << endl;
    } else {
        cout  << ((int) x + 1) << endl;
    }
}