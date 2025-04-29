/*
prefix sum array in reverse order.

Problem Statement:You will be given an integer array A of size N.
You need to print the prefix sum array of the array A in reverse order.

Sample Input
5
2 4 1 5 3
Sample Output
15 12 7 6 2

Explanation
The prefix sum of the given array is: 2 6 7 12 15.
The reverse order is: 15 12 7 6 2.

Sample Input 
3
1000000000 1000000000 1000000000
Sample Output 
3000000000 2000000000 1000000000 

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N;
    cin >> N;
    long long int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    long long int prefix_sum[N];
    prefix_sum[0] = A[0];

    for (int i = 1; i < N; i++)
    {
        prefix_sum[i] = A[i] + prefix_sum[i - 1];
    }
    for (int i = N - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
    }
    return 0;
}