    /*
    @cheatsheet for this problem
    @http://jwilson.coe.uga.edu/EMAT6680Fa2013/Kar/EMAT%206690/Essay%202/Frustum.pdf
    */
    #include <bits/stdc++.h>
    using namespace std;
    #define pi acos(-1.0)
     
    int main()
    {
        //freopen("/home/zeus/Desktop/CPizLuv <3/input.txt", "r", stdin);
        //freopen("/home/zeus/Desktop/CPizLuv <3/output.txt", "w", stdout);
        /*----yer program starts here---*/
        int cases, caseno = 0;
        cin >> cases;
        while(cases--)
        {
            double r1, r2, h, p;
            cin >> r1 >> r2 >> h >> p;
            r1 = r2 + ((r1-r2)*p)/h;
            cout << "Case " << ++caseno << ": ";
            cout << fixed << setprecision(6) << ((pi*p)/3)*(r1*r1+r1*r2+r2*r2) << endl;
        }  
        return 0;
    }


