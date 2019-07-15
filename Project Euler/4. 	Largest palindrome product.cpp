
#include <stdio.h>
int main()
{
    long long i, j, n, number = 0, remainder, temp, max  = 0;
    for(i = 999; i >= 100; i--){
        for(j = 999; j >= 100; j--){
            n = i * j;
            temp = n;
            while(n){
                remainder = n % 10;
                number = number * 10 + remainder;
                n = n / 10;
            }
            if(temp == number){
                if(number > max){
                    max = number;
                }
            }
            number = 0;
        }
    }
    printf("%I64d",max);
}
