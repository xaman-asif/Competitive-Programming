#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Ordering: increasing (default)
    // implementation: Self balancing BST
    // search time: log(n)
    // insertion time: log(n)
    // deletion time: log(n)

    set<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in set" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The set is not empty " << endl;
    else
        cout << "The set is empty" << endl;
    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}