#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int N = x;
        int reverse_val = 0;
        while (N != 0)
        {
            int lastDigit = N % 10;
            N /= 10;

            if (x > 0 && (INT_MAX / 10 < reverse_val) || (reverse_val == INT_MAX / 10 && lastDigit > 7))
                return 0;
            if (x < 0 && (INT_MIN / 10 > reverse_val) || (reverse_val == INT_MAX / 10 && lastDigit < -8))
                return 0;

            reverse_val = reverse_val * 10 + lastDigit;
        }

        return reverse_val;
    }
};

int main()
{

    int N;
    cin >> N;
    Solution ob;
    cout << ob.reverse(N) << endl;

    cout << "~"
         << "\n";
    return 0;
}