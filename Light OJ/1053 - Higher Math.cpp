    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int tc, kase = 0;
        cin >> tc;
        while(tc--) {
            int a, b, c;
            cin >> a >> b >> c;
            if (a < b) swap(a, b);
            if (c > b) swap(b, c);
            if (b > a) swap(a, b);
            if((a*a) == (b*b) + (c*c))
                cout << "Case " << ++kase << ": yes" << endl;
            else
                cout << "Case " << ++kase << ": no" << endl;
        }
        return 0;
    }


