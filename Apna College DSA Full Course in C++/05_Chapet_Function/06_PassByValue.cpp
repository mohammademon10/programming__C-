#include <iostream>
using namespace std;

void changeX(int x)
{
   x=2*x;
   cout<<x<<endl;//10

 
}
int main()
{
    int x=5;
    changeX(x);

    cout<<x<<endl;//5
   
}