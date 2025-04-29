/*
inverted triangle pattern for number
1 1 1 1
  2 2 2
    3 3
      4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++)//line
    {
        for(int j=1;j<=i-1;j++)//space
        {
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++)//column
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

}