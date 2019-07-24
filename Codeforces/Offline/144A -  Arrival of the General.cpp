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
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int tc, count = 0, mxi, mni;
  cin >> tc;
  int ara[tc];
  loop(i, tc)
    cin >> ara[i];
  int max = 0;
  loop(i, tc)
    if(max < ara[i]){
        max = ara[i];
        mxi = i;
    }
  while(max != ara[0])
  {
    swap(ara[mxi],ara[mxi-1]);
    mxi--;
    count++;
  }
  int min = 10000007;
  poop(i, tc)
    if(ara[i] < min)
    {
        min = ara[i];
        mni = i;
    }
  while(min != ara[tc-1])
  {
    swap(ara[mni],ara[mni+1]);
    mni++;
    count++;
  }
  cout << count << endl;
  return 0;
}
