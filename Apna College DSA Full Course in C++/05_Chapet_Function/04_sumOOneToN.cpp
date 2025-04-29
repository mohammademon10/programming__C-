#include <iostream>
using namespace std;

int sumN(int x)
{
    int sum=0;
    for(int i=1;i<=x;i++)//O(n)
    {
        sum+=i;
    }
    //int sum = x*(x+1)/2;//O(1)
    return sum;

 
}
int main()
{
    int n;
    cin >> n;
    cout <<sumN(n) << endl;
}