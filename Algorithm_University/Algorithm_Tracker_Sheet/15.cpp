// A. Lucky Division
// https://codeforces.com/contest/122/problem/A
/*
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.
Examples
Input
47
Output
YES
Input
16
Output
YES
Input
78
Output
NO
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;//(1 ≤ n ≤ 1000)
    int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};//lucky numbers
    for (int i = 0; i < 14; i++)
    {
        if (n % arr[i] == 0)//if n is divisible by lucky number
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}