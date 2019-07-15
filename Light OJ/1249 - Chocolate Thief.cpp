    #include <stdio.h>
     
    struct custom{
        char name[21];
        int l, w, h;
    };
     
    int main()
    {
        int tc, kases = 0;
     
        scanf("%d", &tc);
     
        while(tc-- && ++kases)
        {
            int n, maxx = 0, minn = 1000000, mx, mn;
     
            scanf("%d", &n);
     
            struct custom student[n];
     
            for(int i=0; i<n; i++)
            {
                scanf("%s", student[i].name);
                scanf("%d %d %d", &student[i].l, &student[i].w, &student[i].h);
     
                if(student[i].l * student[i].w * student[i].h > maxx){
                    maxx = student[i].l * student[i].w * student[i].h;
                    mx = i;
                }
                if(student[i].l * student[i].w * student[i].h < minn){
                    minn = student[i].l * student[i].w * student[i].h;
                    mn = i;
                }
            }
            if(student[mx].l * student[mx].w * student[mx].h == student[mn].l * student[mn].w * student[mn].h)
                printf("Case %d: no thief\n", kases);
            else
                printf("Case %d: %s took chocolate from %s\n", kases, student[mx].name, student[mn].name);
        }
     
        return 0;
    }
     

