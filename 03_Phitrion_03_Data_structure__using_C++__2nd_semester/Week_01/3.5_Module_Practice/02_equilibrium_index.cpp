/*
Description: Given an array of integers, find the equilibrium index.
An equilibrium index is an index such that the sum of elements at lower
indexes is equal to the sum of elements at higher indexes.

Example:
Input
7
-7 1 5 2 -4 3 0
Output
3
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int prefSum = 0, total = 0;

    // Calculate the array sum
    for (int ele : arr)
    {
        total += ele;
    }

    // Iterate over the array to find the equilibrium point
    for (int i = 0; i < arr.size(); i++)
    {
        int suffSum = total - prefSum - arr[i];
        if (prefSum == suffSum)
        {
            cout << i << endl;
            return 0;
        }
        prefSum += arr[i];
    }

    // If no equilibrium point is found
    cout << -1 << endl;
    return 0;
}
