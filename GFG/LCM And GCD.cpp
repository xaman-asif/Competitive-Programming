#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> lcmAndGcd(int a, int b)
    {
        vector<int> v = {};
        int aval = a;
        int bval = b;
        int lcm = 0;

        while (a > 0 && b > 0)
        {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }

        // LCM(a, b) = GCD (a, b) / a x b
        if (a == 0)
        {
            lcm = (aval * bval) / b;
            v = {lcm, b};
        }
        else
        {
            lcm = (aval * bval) / a;
            v = {lcm, a};
        }

        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}