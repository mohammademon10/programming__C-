/*
Problem 1 :Duplication Check

Problem Description:You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

Sample Input 
5
1 2 3 4 5
Sample Output 
NO

Sample Input 
6
2 1 3 5 2 1 
Sample Output 
YES
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A, A + N);
    bool flag = false;

    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            flag = true;
            break;
        }
    }
    if (flag==true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}