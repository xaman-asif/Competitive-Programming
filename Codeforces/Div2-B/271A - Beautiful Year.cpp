#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;    cin>>num;
    while(true){
        num++;
        int a = num % 10;
        int b = (num%100)/10;
        int c = (num%1000)/100;
        int d = num / 1000;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)    break;
    }
    cout << num << endl;
    return 0;
}
