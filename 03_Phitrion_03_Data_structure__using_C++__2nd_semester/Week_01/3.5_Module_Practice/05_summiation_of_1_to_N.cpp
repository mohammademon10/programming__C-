/*
Summation from 1 to N
Given a number N. Print the summation of the numbers that is between 1 and N
(inclusive).

Input
Only one line containing a number N(1≤N≤10^9)

Output
Print the summation of the numbers that are between 1 and N
(inclusive).

Examples
Input
3
Output
6
Input
10
Output
55

Note: Solve this problem in O(1) Complexity.

*/
#include<iostream>
using namespace std;
int main()
{
    long long int N;
    cin>>N;

    long long int sum = N*(N+1)/2;

    cout<<sum<<endl;

}
