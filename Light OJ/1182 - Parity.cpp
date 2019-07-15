    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int tc, kase = 1;
        cin >> tc;
        while(tc--)
        {
            int num, c = 0;
            cin >> num;
            while(num)
            {
                int t = num / 2;
                t = num - t * 2;
                if(t==1) c++;
                num /= 2;
            }
            if(c%2==0)
                cout << "Case " << kase++ << ": even" << endl;
            else
                cout << "Case " << kase++ << ": odd" << endl;
        }
        return 0;
    }
     


