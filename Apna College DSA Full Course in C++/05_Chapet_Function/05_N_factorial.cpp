#include <iostream>
using namespace std;

int factN(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)//O(n)
    {
        fact*=i;
    }

    return fact;

 
}
int main()
{
    int n;
    cin >> n;
    cout <<factN(n)<< endl;
}