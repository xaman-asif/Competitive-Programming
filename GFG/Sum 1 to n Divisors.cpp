//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int sumOfDivisors(int n)
    {
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            for (int i = j; i > 0; i--)
            {
                if (j % i == 0)
                {
                    sum += i;
                }
            }
        }

        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends