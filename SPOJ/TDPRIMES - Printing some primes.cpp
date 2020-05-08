#include <bits/stdc++.h>
using namespace std;

int stauts[(100000000/32)+2];

bool Check(int num, int pos){return (bool) (num & (1 << pos));}
int Set(int num, int pos){return num = num | (1 << pos);}

void sieve()
{
    int N = 100000000;
    int root = int(sqrt(N));
    for (int i=3; i <= root; i += 2)
    {
        if(Check(stauts[i>>5],i&31)==0)
        {
            for (int j=i*i; j<=N; j+= (i<<1))
            {
                stauts[j>>5] = Set(stauts[j>>5],j&31);
            }
        }
    }
    puts("2");
    int x=1;
    for (int i=3; i<=N; i+=2)
        if(Check(stauts[i>>5],i&31)==0){
            x++;
            if(x%100==1){
                printf("%d\n",i);
            }
        }
}

int main()
{
    sieve();
    return 0;
} 
