#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n, x, d = 0, count = 0;
    cin >> n >> x;

    int l[n];

    for(int i=0; i<n+1; i++){
    	if(i < n)
    		cin >> l[i];
    	if(i > 0)
    	{
    		d += l[i-1];
    		if(d <= x)
    			++count;
    	}
    }
    cout << count+1 << endl;
    return 0;
}
