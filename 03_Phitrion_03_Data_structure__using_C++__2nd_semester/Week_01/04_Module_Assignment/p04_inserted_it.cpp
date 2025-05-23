/*
Problem Statement:you will given an integer array A of size N and another array B of size M.
Also you will be given an index X.You need to insert the whole array B to the index X of array A.
Sample Input
5
2 3 4 5 6
3
10 20 30
3
Sample Output 0
2 3 4 10 20 30 5 6

Sample Input 1
5
2 3 4 5 6
3
10 20 30
0
Sample Output 1
10 20 30 2 3 4 5 6

Sample Input 2
4
3 4 5 6
3
10 20 30
4
Sample Output 2
3 4 5 6 10 20 30

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int x;
    cin >> x;
    v.insert(v.begin() + x, v2.begin(), v2.end());

    for (int i : v)//i->index value
    {
        cout << i << " ";
    }

    return 0;
}