#include <bits/stdc++.h>
using namespace std;
int main()
{

    //1st type
    vector<int> v1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int val : v1)
    {
        cout << val << " ";
    }
    cout<<endl;

    // second type
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    for (int val : v2)
    {
        cout << val << " ";
    }
    
    return 0;
}