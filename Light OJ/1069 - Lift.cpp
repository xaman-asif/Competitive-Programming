    /*
     * Author:      Asifuzzaman Opi
     * Codename:    0ne1ronaut
     * University:  United International University
     * Email:       asifuzzaman.opi@gmail.com
     */
     
    /*----PRE-PROCESSORS---*/
    #include <iomanip>
    #include <cmath>
    #include <cstdio>
    #include <iostream>
    using namespace std;
     
    /*---Constants---*/
    #define PI 2 * acos(0.0)
    typedef long long ll;
    typedef long double ld;
     
    /*---Code starts here---*/
    int main()
    {
        int tc, kases = 0;
        scanf("%d", &tc);
        while(tc--)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a < b)
                printf("Case %d: %d\n", ++kases, b*4+19);
            else
                printf("Case %d: %d\n", ++kases,(2*a - b)*4+19);
        }
        return 0;
    }
     

