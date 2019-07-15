    #include <stdio.h>
    int main()
    {
        int t, cases = 0;
        scanf("%d", &t);
        while(t--)
        {
            int x, m, n;
            scanf("%d %d", &m, &n);
            int p = m*n;
            if (m > n) x = m; else x = n;
            if(m==1 || n == 1)
            {
                printf("Case %d: %d\n", ++cases, p);
            }
            else if(m==2 || n==2)
            {
                if(x%4==1)
                {
                    printf("Case %d: %d\n", ++cases, x+1);
                }
                else if(x%4==2)
                {
                    printf("Case %d: %d\n", ++cases, x+2);
                }
                else if(x%4==3)
                {
                    printf("Case %d: %d\n", ++cases, x+1);
                }
                else if(x%4==0)
                {
                    printf("Case %d: %d\n", ++cases, x);
                }
            }
            else if(p%2==0)
            {
                printf("Case %d: %d\n", ++cases, p/2);
            }
            else if(p%2!=0)
            {
                printf("Case %d: %d\n", ++cases, (p/2) + 1);
            }
        }
        return 0;
    }
     

