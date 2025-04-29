/*
Problem-1: Running Sum of an Array

Description:
Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]).
Write a C++ program to compute the running sum of the given array and print the result.

Note: Solve this problem using function and Vector. 

Example:
Input
4
1 2 3 4
output
1 3 6 10

Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

*/
//1st waye
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> runningSum(n);
    runningSum[0]=nums[0];
    for(int i=1;i<n;i++)
    {
        runningSum[i]=runningSum[i-1]+nums[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<runningSum[i]<<" ";
    }
    return 0;
}






