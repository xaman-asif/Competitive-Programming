/*
 * Author:      Asifuzzaman Opi
 * Handle:	    0ne1ronaut
 * University:  United International University
 * Email:       asifuzzaman.opi@gmail.com
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  int n, kount = 0;
  cin >> n;
  int ara[n][2];
  for(int i=0; i<n; i++)
    cin >> ara[i][0] >> ara[i][1];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(ara[i][0]==ara[j][1] && i!=j)
        kount++;
    }
  }
  cout << kount << endl;
  return 0;
}
