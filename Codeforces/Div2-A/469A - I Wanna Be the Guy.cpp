/*
 * Author:      Asifuzzaman Opi
 * Handle:      0ne1ronaut
 * University:  United International University
 * Email:       asifuzzaman.opi@gmail.com
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i, n, t; scanf("%d", &n);
  bool ara[n] = {0};
  int p; scanf("%d", &p);
  while(p--){
    scanf("%d", &t);
    ara[t-1] = true;
  }
  int q; scanf("%d", &q);
  while(q--){
    scanf("%d", &t);
    ara[t-1] = true;
  }
  for(i=0; i<n; ++i)
    if(ara[i]!=true) break;
  i==n?printf("I become the guy.\n"):printf("Oh, my keyboard!\n");
  return 0;
}
