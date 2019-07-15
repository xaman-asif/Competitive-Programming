    #include <stdio.h>
     
    void palindrome_check(long long n, int kases)
    {
        long long t = 0, temp = n;
     
        while(n)
        {
            t = t*10 + n%10;
            n /= 10;
        }
     
        if(t==temp)
            printf("Case %d: Yes\n", kases);
        else
            printf("Case %d: No\n", kases);
    }
     
    int main()
    {
        int tc, kases = 0;
     
        scanf("%d", &tc);
     
        while(tc-- && ++kases)
        {
            long long n;
            scanf("%lld", &n);
     
            palindrome_check(n, kases);
        }
    }
     

