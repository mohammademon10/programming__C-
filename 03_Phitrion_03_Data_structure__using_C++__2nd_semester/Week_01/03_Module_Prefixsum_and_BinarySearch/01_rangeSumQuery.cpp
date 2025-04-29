/*
Given 2 numbers N and Q, an array A of N number and Q number of pairs L
,R. For each query Q print a single line that contains the summation of all numbers from index L
 to index R.
 
Input
6 3
6 4 2 7 2 7
1 3
3 6
1 6
Output
12
18
28

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q, l, r;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) // while(q--)
    {
        cin >> l >> r; // l,r(quary) position not index so,(l-1) & (r-1)
        int sum = 0;
        for (int j = l - 1; j <= r - 1; j++)
        {
            sum = sum + a[j];
        }
        cout << sum << endl;
    } // time complexicity -> O(nq)

    return 0;
}

// 2nd way
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;//l-1
        r--;//r-1
        int sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}