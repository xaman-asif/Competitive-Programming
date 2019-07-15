#include <bits/stdc++.h>
using namespace std;

int main()
{
  int p, q, r;
  cin >> p >> q >> r;
  
  int abc = p + q;
  int bac = p + r;
  int bca = q + r;
  int acc =  p + q + q;
  int ara[4] = {abc, bac, bca, acc};
  int max = 1000;
  for(int i=0; i<4; i++)
  {
    if(ara[i]<max)
      max = ara[i];
  }
  cout << max << endl;
  return 0;
}
