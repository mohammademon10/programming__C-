#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << ar[i] << endl;
    }
    
    return 0;
}