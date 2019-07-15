    #include <stdio.h>
    #include <math.h>
     
    int main()
    {
        int tc, kases = 0;
        scanf("%d", &tc);
        while(tc--){
            int a, b, c, d;
            scanf("%d", &a);
            getchar();
            scanf("%d", &b);
            getchar();
            scanf("%d", &c);
            getchar();
            scanf("%d", &d);
            int w, x, y, z;
            scanf("%d", &w);
            getchar();
            scanf("%d", &x);
            getchar();
            scanf("%d", &y);
            getchar();
            scanf("%d", &z);
            int m = 0, n = 0, o = 0, p = 0;
            for(int i=0; i <= 7 && w; i++)
            {
                m += w%10 * pow(2,i);
                w /= 10;
            }
            for(int i=0; i <= 7 && x; i++)
            {
                n += x%10 * pow(2,i);
                x /= 10;
            }
            for(int i=0; i <= 7 && y; i++)
            {
                o += y%10 * pow(2,i);
                y /= 10;
            }
            for(int i=0; i <= 7 && z; i++)
            {
                p += z%10 * pow(2,i);
                z /= 10;
            }
            if(m==a && n==b && o==c && p==d)
                printf("Case %d: Yes\n",++kases);
            else
                printf("Case %d: No\n",++kases);
        }
        return 0;
    }
