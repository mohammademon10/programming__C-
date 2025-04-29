/*
pyramid pattern

      1|
    1 2| 1
  1 2 3|2 1
1 2 3 4|3 2 1
       |

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;//4
    for(int i=1;i<=n;i++)//line//i=1,2,3,4
    {
        for(int j=1;j<=n-i;j++)//space//for i=1 then j=3 //j=1,2,3
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)//column//for i=1 then j=1 //j=1,2,3,4//forward loop
        {
            cout<<j<<" ";
        }
        for(int j=i-1;j>=1;j--)//column//for i=1 then j=2 //j=3,2,1//backword loop
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}