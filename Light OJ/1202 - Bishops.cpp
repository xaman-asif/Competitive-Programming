    #include <stdio.h>
     
    int main()
    {
        int tc, caseno = 0;
     
        scanf("%d", &tc);
     
        while(tc--)
        {
            int r1, c1, r2, c2;
     
            scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
     
            if((r1+c1)%2!=(r2+c2)%2)
                printf("Case %d: impossible\n", ++caseno);
            else
            {
                if((r1-c1==r2-c2) || (r2+c2==r1+c1))
                    printf("Case %d: 1\n", ++caseno);
                else
                    printf("Case %d: 2\n", ++caseno);
            }
        }
        return 0;
    }
     

