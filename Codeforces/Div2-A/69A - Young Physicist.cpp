#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
  int tc, x, y, z; scanf("%d", &tc);
  vector <int> v[3];
  while(tc--)
  {
    int t;
    scanf("%d",&t); v[0].push_back(t);
    scanf("%d",&t); v[1].push_back(t);
    scanf("%d",&t); v[2].push_back(t);
  }
  accumulate(v[0].begin(),v[0].end(),0)==0 &&
  accumulate(v[1].begin(),v[1].end(),0)==0 &&
  accumulate(v[2].begin(),v[2].end(),0)==0 ? cout << "YES\n":cout << "NO\n";
  return 0;
}
