/*
inerverted triangle pattern for charecter

A A A A
  B B B
    C C
      D
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++)//line
    {
        for(int j=1;j<=i-1;j++)//space
        {
            cout<<"  ";
        }
        for(int j=1;j<=n-i+1;j++)//column
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    return 0;

}