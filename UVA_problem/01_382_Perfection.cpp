/*
Input
A list of N positive integers (none greater than 60,000), with 1 < N < 100. A ‘0’ will mark the end of
the list.
Output
The first line of output should read ‘PERFECTION OUTPUT’. The next N lines of output should list for
each input integer whether it is perfect, deficient, or abundant, as shown in the example below. Format
counts: the echoed integers should be right justified within the first 5 spaces of the output line, followed
by two blank spaces, followed by the description of the integer. The final line of output should read
‘END OF OUTPUT’.

Sample Input
15 28 6 56 60000 22 496 0
Sample Output
PERFECTION OUTPUT
15 DEFICIENT
28 PERFECT
6 PERFECT
56 ABUNDANT
60000 ABUNDANT
22 DEFICIENT
496 PERFECT
END OF OUTPUT

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sumProperDivisors(int num)
{
    if(num == 1) return 0;
    int sum = 0;

    // Calculate sum of proper divisors
    for (int j = 1; j <= num / 2; ++j)
    {
        if (num % j == 0)
        {
            sum += j;
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> numbers;
    int num;
    while (cin >> num && num != 0)
    {
        numbers.push_back(num);
    }

    cout << "PERFECTION OUTPUT" << endl;
    for (int i = 0; i < numbers.size(); ++i)
    {
        int sum = sumProperDivisors(numbers[i]);

        cout << setw(5) << numbers[i] << "  ";
        if (sum == numbers[i])
        {
            cout << "PERFECT";
        }
        else if (sum > numbers[i])
        {
            cout << "ABUNDANT";
        }
        else
        {
            cout << "DEFICIENT";
        }
        cout << endl;
    }
    cout << "END OF OUTPUT" << endl;

    return 0;
}