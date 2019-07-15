    #include <stdio.h>
    #include <string.h>
     
    int main()
    {
        int tc, kases = 0;
     
        scanf("%d", &tc);
     
        while(tc--)
        {
            printf("Case %d:\n", ++kases);
            int t, temp = 0;
            scanf("%d", &t);
     
            while(t--)
            {
                int x; char S[10];
     
                scanf("%s", S);
     
                if(strcmp(S, "donate")==0)
                {
                    scanf("%d", &x);
                    temp += x;
                }
                else printf("%d\n",temp);
            }
        }
        return 0;
    }
     


