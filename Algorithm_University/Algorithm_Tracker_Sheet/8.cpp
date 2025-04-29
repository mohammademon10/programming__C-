// H - Parking (Linear Search 02)
/*
When shopping on Long Street, Michael usually parks his car at some
random location, and then walks to the stores he needs. Can you help
Michael choose a place to park which minimises the distance he needs to
walk on his shopping round?
Long Street is a straight line, where all positions are integer. You pay
for parking in a specific slot, which is an integer position on Long Street.
Michael does not want to pay for more than one parking though. He is
very strong, and does not mind carrying all the bags around.

Input
The first line of input gives the number of test cases, 1 ≤ t ≤ 100. There are two lines for each test
case. The first gives the number of stores Michael wants to visit, 1 ≤ n ≤ 20, and the second gives
their n integer positions on Long Street, 0 ≤ xi ≤ 99.

Sample Input
2
4
24 13 89 37
6
7 30 41 14 39 42

Sample Output
152
70
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = INT_MIN;
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
            }
        }
        int min = INT_MAX;
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] < min)
                {
                    min = a[i];
                }
            }
        }
        int result = (max - min) * 2; // max-min is the distance between the farthest and nearest car from the parking spot
        cout << result << endl;
    }
}

// 2nd Approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min_pos = *min_element(a.begin(), a.end());
        int max_pos = *max_element(a.begin(), a.end());

        int result = 2 * (max_pos - min_pos);
        cout << result << endl;
    }

    return 0;
}