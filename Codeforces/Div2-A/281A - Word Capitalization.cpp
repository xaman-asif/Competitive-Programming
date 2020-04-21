#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[1000];	cin>>s;
	int i = 0;
	if(s[i] <= 'z' && s[i] >= 'a')
	s[i] = s[i] - 'a' + 'A';
	cout << s << endl;
}
