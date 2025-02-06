#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myInts[] = {1, 3, 2};
    sort(myInts, myInts + 3);
    do
    {
        cout << myInts[0] << myInts[1] << myInts[2] << endl;
    } while (next_permutation(myInts, myInts + 3));
}