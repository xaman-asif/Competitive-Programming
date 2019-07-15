    #include <math.h>
    #include <stdio.h>
     
    int main()
    {
        int tc, kases = 0;
     
        scanf("%d", &tc);
     
        while(tc--)
        {
            double ox, oy, ax, ay, bx, by;
     
            scanf("%lf %lf %lf %lf %lf %lf", &ox, &oy, &ax, &ay, &bx, &by);
     
            double a, c;
     
            a = sqrt(pow(ax-ox,2)+pow(ay-oy,2));
     
            c = sqrt(pow(ax-bx,2)+pow(ay-by,2));
     
            printf("Case %d: %lf\n", ++kases, (acos((pow(a,2)+pow(a,2)-pow(c,2))/(2*a*a)))*a);
        }
     
        return 0;
    }
     

