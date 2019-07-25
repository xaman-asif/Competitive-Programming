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
  int n, m, k, t, couunt = 0;
  vector <int> ara;
  cin >> n >> m >> k;
  loop(i, m){
    cin >> t;
    ara.push_back(t);
  }
  cin >> t;
  ara.push_back(t);
  //cout << ara.size() << endl;
  loop(i, ara.size()-1)//You Have To Skip Comparing Mth Number With Comparing With Itself
  {
    if(__builtin_popcount(ara[i] ^ ara[m]) <= k){
      couunt++;
    }
    /*cout << couunt << " " << ara[i] << " " << ara[m] << " " << bitset<8>(ara[i]) << " " << bitset<8>(ara[m]) << " " << bitset<8> (ara[i]^ara[m]) << " " << __builtin_popcount((ara[i]^ara[m])) << endl;*/
  }
  cout << couunt << endl;
  return 0;
}
