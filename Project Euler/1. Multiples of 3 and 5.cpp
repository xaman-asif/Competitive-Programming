
#include <stdio.h>
int main()
{
    int i, N, sum = 0;
    scanf("%d",&N);
    for(i = (N-1); i >= 0; i--){
        if((i%3)==0 || (i%5)==0){
            sum = sum + i;
        }
    }
    printf("Sum = %d",sum);
    return 0;
}
