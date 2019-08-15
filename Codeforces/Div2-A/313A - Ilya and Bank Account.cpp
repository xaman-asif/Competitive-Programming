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
    getline(cin,s);
    if(s[0]=='-')
    {
        string x = s;
        x[x.size()-2] = x[x.size()-1];
        x[x.size()-1] = '\0';
        string y = s;
        y[y.size()-1] = '\0';
        if(x[x.size()-2]<y[y.size()-2])
        {
            if(x[0]=='-' && x[1]=='0')
                cout<<0<<endl;
            else
            {
                int z = 0;
                for(int i=1; x[i]!='\0'; i++)
                    z = z * 10 + (x[i] - '0');
                cout << -z << endl;
            }
        }
        else
        {
            if(y[0]=='-' && y[1]=='0')
                cout<<0<<endl;
            else
            {
                int z = 0;
                for(int i=1; x[i]!='\0'; i++)
                    z = z * 10 + (y[i] - '0');
                cout << -z << endl;
            }
        }
    }
    else
        cout << s << endl;
    return 0;
}
