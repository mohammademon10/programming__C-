// G - Horror Dash (Linear Search 01)
/*
Sample Input
2
5 9 3 5 2 6(5 is  size of array)
1 2(1 is size of array)

Sample Output
Case 1: 9
Case 2: 2
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] > max)
            {
                max = s[i];
            }
        }
        cout << "Case " << i << ": " << max << endl;
    }
}