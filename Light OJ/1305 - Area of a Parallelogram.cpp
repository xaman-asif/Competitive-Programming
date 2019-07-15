    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int tc, kases = 0;
        scanf("%d", &tc);
        while(tc--)
        {
            double ax, ay, bx, by, cx, cy, dx, dy;
            cin >> ax >> ay >> bx >> by >> cx >> cy;
            dx = cx - (bx - ax);
            dy = cy - (by - ay);
            double a = sqrt(pow(ax-dx,2)+pow(ay-dy,2));
            double b = sqrt(pow(dx-cx,2)+pow(dy-cy,2));
            double c = sqrt(pow(cx-ax,2)+pow(cy-ay,2));
            double p = (a + b + c) / 2;
            double area = 2 * sqrt(p*(p-a)*(p-b)*(p-c));
            printf("Case %d: %0.0lf %0.0lf %0.0lf\n", ++kases, dx, dy, area);
        }
        return 0;
    }


