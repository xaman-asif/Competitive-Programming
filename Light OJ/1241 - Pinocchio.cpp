    #include <stdio.h>
    #include <math.h>
     
    int main()
    {
        int tc, kases = 0;
        scanf("%d", &tc);
        while(tc-- && ++kases){
            int i, r;
            scanf("%d", &r);
            int ara[r];
            double sum = 0, t;
            for(i=0; i<r; i++){
                scanf("%d", &ara[i]);
                if(i==0)
                {
                    t = (ara[i]-2.0)/5.0;
                    t = ceil(t);
                    sum += t;
                }
                else
                {
                    t = (ara[i] - ara[i-1])/5.0;
                    t = ceil(t);
                    sum += t;
                }
            }
        printf("Case %d: %0.0lf\n", kases, sum);
        }
        return 0;
    }
     

