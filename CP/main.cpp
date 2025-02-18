//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long n)
    {
        vector<long long> array;

        return factors(n, 1, array);
    }

    vector<long long> factors(int n, int i, vector<long long> arr)
    {
        if (i <= n)
        {
            if (n % i == 0)
            {
                arr.push_back(i);
            }

            return factors(n, i + 1, arr);
        }
        else
        {
            return arr;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends