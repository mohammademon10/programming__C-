/*
Q1. Write a program to determine if there is a duplicate of a given target value in
a sorted array of integers.If a duplicate is found, print true. If no duplicate is found, print false.

Input:
5
1 2 3 4 5
7
Output:
false

Input:
5
1 1 2 3 5
1
Output:
true

Input:
7
1 2 3 4 5 7 7
7
Output:
true

Input:
5
1 2 2 3 4
2
Output:
true

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int x;
    cin >> x;
    int l = 0, r = n - 1;
    bool flag = false;

    while(l<=r)//O(logN)
    {
        int mid_index = l + (r - l) / 2;

        if (A[mid_index] == x)
        {
            //check for duplicate
            if (A[mid_index] == A[mid_index - 1])//check for left side
            {
                flag = true;
                break;
            }
            else if (A[mid_index] == A[mid_index + 1])//check for right side
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
                break;
            }
           
        }
        else if (A[mid_index] < x)
        {
            l = mid_index + 1;
        }
        else
        {
            r = mid_index - 1;
        }

    }
    if (flag)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
   
    return 0;
}//Time complexity:O(logN)

/*

Problem 2: LeftSum Array

Description:
Given an array of integers,calculate the sum of all elements to the left of each element in the array. 
If there are no elements to the left, the sum is zero.

Note: Solve this problem in O(n) Complexity

Input:
The first line contains an integer n, the size of the array.
The second line contains n space-separated integers representing the array.
Output:
Print the sum of elements to the left of each element in the array.

Input
5
1 2 3 4 5
Output
0 1 3 6 10
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int left_sum[n];
    left_sum[0]=0;
    for(int i=1;i<n;i++)//time complexity:O(n)
    {
        left_sum[i]=left_sum[i-1]+A[i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<left_sum[i]<<" ";
    }
}


