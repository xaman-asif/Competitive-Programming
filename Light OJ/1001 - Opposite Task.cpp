
    #include <stdio.h>
    int main()
    {
        int T;
        scanf("%d", &T);
        while(T--){
            int i, j, test, flag;
            scanf("%d",&test);
            flag = 1;
            for(i=10; i >= 0; i--){
                for(j=0; j <= 10; j++){
                    if(i+j == test){
                        printf("%d %d\n", i, j);
                        flag = 0;
                        break;
                    }
                    if(flag==0) break;
                }
            }
        }
        return 0;
    }
     

