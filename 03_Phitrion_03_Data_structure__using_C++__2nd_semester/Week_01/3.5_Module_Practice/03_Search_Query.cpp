/*

Problem-3: Search Query

WAP that takes an array of size n and q queries as input. For each query you will be
given a number. For each query you have to print ‘YES’ if the number is present in the
array, otherwise print ‘No’. Solve this problem in optimized way.

Sample input
5
6 3 2 1 8

4//queries

1
5
2
9

Sample output
YES
NO
YES
NO

Explanation: You are given an array of size 5 and 4 queries. In the first query
you are given 1. 1 is present in the array so we print ‘YES’. In the second
query 5 is not present in the array so we print ‘NO’. Third and Fourth query are
similar.

*/
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int q;
    cin >> q;

    while (q--)
    {

        int target;
        cin >> target;
        int l = 0, r = n - 1;
        bool flag = false;

        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (target == a[mid_index])
            {
                flag = true;
                break;
            }

            else if (target > a[mid_index])
            {
                l = mid_index + 1;
            }
            else
            {
                r = mid_index - 1;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
