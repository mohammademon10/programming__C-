#include <iostream>
using namespace std;
int main()
{

    //post increment
    int a=10;

    int b=a++;//1st work then update
    cout<<"b = "<<b<<endl;
    cout<<"a = "<<a<<endl;

    //pre increment
    int x=20;

    int y=++x;//update then work
    cout<<"Y = "<<y<<endl;
    cout<<"X = "<<x<<endl;

    //post Decrement
    int i=30;
    int j=i--;//work->update

    cout<< "j = "<<j<<endl;
    cout<< "i = "<<i<<endl;

    //pre Decrement
    int m = 50;
    int n=--m;

    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;

    return 0;
}