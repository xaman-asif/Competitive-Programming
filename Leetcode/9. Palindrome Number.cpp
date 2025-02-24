#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int N)
    {
        int reverse_val = 0;
        while (N != 0)
        {
            int lastDigit = N % 10;
            N /= 10;

            if ((INT_MAX / 10 < reverse_val) || ((reverse_val == INT_MAX / 10) && lastDigit > 7))
                return 0;
            reverse_val = reverse_val * 10 + lastDigit;
        }

        return reverse_val;
    }

    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        int reversed_value = reverse(x);

        if (reversed_value == 0)
        {
            return false;
        }
        else
        {
            while (x)
            {
                if (x % 10 != reversed_value % 10)
                {
                    return false;
                }
                x /= 10;
                reversed_value /= 10;
            }

            return true;
        }
    }
};

int main()
{

    int N;
    cin >> N;
    Solution ob;
    cout << ob.isPalindrome(N) << endl;

    cout << "~"
         << "\n";
    return 0;
}