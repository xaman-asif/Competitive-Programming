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
  long long n, v, i = 0; scanf("%I64d %I64d", &n, &v);
  vector <long long> ara[n], res;
  while(n--)
  {
    long long k;  scanf("%I64d", &k);
    while(k--)
    {
      long long t;
      scanf("%I64d", &t);
      ara[i].push_back(t);
    }
    i++;
  }
  for(long long j=0; j<i; j++)
  {
    if(*min_element(ara[j].begin(),ara[j].end()) < v)
      res.push_back(j);
  }
  printf("%d\n",res.size());
  for(long long j=0; j<res.size(); j++){
    printf("%I64d",res[j]+1);
    if(j!=res.size()-1)
      printf(" ");
  }
  return 0;
}
