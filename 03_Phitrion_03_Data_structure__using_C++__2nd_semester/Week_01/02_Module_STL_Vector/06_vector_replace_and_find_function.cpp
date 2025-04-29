#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    vector<int> v = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};

    replace(v.begin(), v.end(), 2, 100); // 2->value,100->replace value
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // find
    vector<int> v1 = {1, 2, 2, 4, 3, 5, 1, 2, 4, 5, 3, 2};

    auto it = find(v1.begin(), v1.end(), 2);

    if (it == v1.end())
    {
        cout << "Not found" << endl;
    }
    else//(it != v1.end())
    {
        cout << "Found" << endl;
    }
    return 0;
}