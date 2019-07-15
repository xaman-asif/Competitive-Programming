    #include <bits/stdc++.h>
    using namespace std;
     
    #define dr acos(-1.0)/180
     
    int main()
    {
        int tc, kases = 0;
        scanf("%d", &tc);
        while(tc--)
        {
            double R, n;
            scanf("%lf %lf", &R, &n);
            printf("Case %d: %lf\n", ++kases, (R*sin(((360/n)/2)*dr))/(1+sin(((360/n)/2)*dr)));
        }
        return 0;
    }


