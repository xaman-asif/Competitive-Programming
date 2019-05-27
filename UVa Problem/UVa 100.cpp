#include <stdio.h>
int main()
{   //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int i, j, n, count, max = 0;
    while(scanf("%d %d",&i,&j)==2){
        int start = i, end =j;
        if( i > j){
            int t = i;
            i = j;
            j = t;
        }
        for(n=i; i<=j; i++){
            n = i;
            count = 0;
            while(1){
                count++;
                if(n==1) break;
                else if(n%2 != 0) n = 3 * n + 1;
                else if(n%2 == 0) n = n / 2;
            }
            if(count > max) max = count;
        }
        printf("%d %d %d\n", start, end, max);
        max = 0;
    }
    //fclose(stdin);
    return 0;
}
