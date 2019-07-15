    #include <stdio.h>
    int add(){
        int a, b;
        scanf("%d %d", &a, &b);
        return a + b;
    }
    int main()
    {
        int n, kases  = 1;
        scanf("%d",&n);
        while(n--)
        {
            int temp = add();
            printf("Case %d: %d\n",kases++,temp);
        }
        return 0;
    }
     

