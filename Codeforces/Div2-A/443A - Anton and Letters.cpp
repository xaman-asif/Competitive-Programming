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
  string s;
  map <char,int> m;
  getline(cin,s);
  for(int i=0; s[i]; i++)
    if(s[i] <= 'z' && s[i] >= 'a')
      m[s[i]]=i;
  cout << m.size() << endl;
  return 0;
}
