/*
 * Author:      Asifuzzaman Opi
 * Handle:  0ne1ronaut
 * University:  United International University
 * Email:       asifuzzaman.opi@gmail.com
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int n, m, win = 0;
  cin >> n >> m;
  while(n && m)
  {
    n--;
    m--;
    win++;
  }
  (win%2==0)?cout<<"Malvika\n":cout<<"Akshat\n";
  return 0;
}
