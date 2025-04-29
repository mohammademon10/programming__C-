#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int s=x+y;
    //return (x + y);
    return s;
}
int main()
{
    int a, b;
    cin >> a >> b;
    //int d = sum(a, b);
    //cout << d << endl;
    cout<<sum(a,b)<<endl;
}