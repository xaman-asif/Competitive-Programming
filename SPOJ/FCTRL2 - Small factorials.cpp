/*
     * Author:      Asifuzzaman Opi
     * Codename:    0ne1ronaut
     * University:  United International University
     * Email:       asifuzzaman.opi@gmail.com
*/

@Resources:https://www.geeksforgeeks.org/factorial-large-number/@

#include <bits/stdc++.h>
using namespace std;

#define MAX 200
int ara[MAX], cize;
void mul(int x);
void fact(int n)
{
  ara[0] = 1;
  cize = 1;
  for(int x=2; x<=n; x++)
    mul(x);
  reverse(ara,ara+cize);
  for(int i=0; i<cize; i++)
    printf("%d",ara[i]);
  printf("\n");
}
void mul(int x)
{
  int carry = 0;
  for(int i=0; i<cize; i++){
    int temp = ara[i] * x + carry;
    ara[i] = temp % 10;
    carry = temp / 10;
  }
  while(carry)
  {
    ara[cize] = carry%10;
    carry /= 10;
    cize++;
  }
}
int main()
{
  int tc;
  scanf("%d", &tc);
  while(tc--)
  {
    int n;
    scanf("%d", &n);
    fact(n);
  }
}
