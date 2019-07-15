    #include <bits/stdc++.h>
    #include <cmath>
    #define pi 2 * acos(0.0)
    using namespace std;
    int main()
    {
        int tc, kases = 0;
        cin >> tc;
        while(tc--)
        {
            double r;
            cin >> r;
            cout << fixed << setprecision(2) << "Case " << ++kases << ": " << pow((2*r),2) - pi * pow(r,2) << endl;
        }
        return 0;
    }
     

