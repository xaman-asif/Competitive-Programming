#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 0, b = 0;
	string s;	cin >> s;
	for (int i = 0; i < s[i]; i++)
		if(s[i] >= 'a' && s[i] <= 'z')	a++;
		else b++;
	if (b > a)
		for (int i=0; s[i]; i++)
			cout << (char) toupper(s[i]);
	else
		for(int i=0; s[i]; i++)
			cout << (char) tolower(s[i]);
	cout << '\n';
	return 0;	
}
