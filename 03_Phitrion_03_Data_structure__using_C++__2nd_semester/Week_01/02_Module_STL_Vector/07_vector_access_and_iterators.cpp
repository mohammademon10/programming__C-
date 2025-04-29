#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};


    //acess value
    //last elements
    cout << v[v.size() - 1] << endl; // 5
    cout << v.back() << endl;        // 5
    
    // first elements
    cout << v[0] << endl;
    cout << v.front() << endl;

    //itaration
    vector<int>::iterator it;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}