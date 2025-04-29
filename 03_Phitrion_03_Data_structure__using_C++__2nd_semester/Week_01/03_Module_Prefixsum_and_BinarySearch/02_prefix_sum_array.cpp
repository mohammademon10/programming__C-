/*
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
    long long n, q;
    cin >> n >> q;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long pre[n]; // prefix sum array
    pre[0] = a[0];    // first element of prefix sum array is same as first element of array

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    /*
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";//6 10 12 19 21 28
    }
    */

    /*while (q--)*/for(int i=0;i<q;i++)
    {
        long long l, r;//l,r(quary) position not index so,(l-1) & (r-1)
        cin >> l >> r;
        l--;//l-1
        r--;//r-1//l,r(quary) position not index so,(l-1) & (r-1)

        long long sum=0;

        if (l == 0)
        {
            sum = pre[r] - 0; // pre[r] is the sum of all elements from 0 to r
        }
        else
        {
            sum = pre[r] - pre[l - 1]; // pre[r] is the sum of all elements from 0 to r and pre[l-1] is the sum of all elements from 0 to l-1
        }

        cout << sum << endl;
    }

    return 0;
}
