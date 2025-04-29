#include <iostream>
using namespace std;
int main()
{
    int a = 11, b = 5;

    int x = 5, y = 2;

    cout << "Sum = " << (a + b) << endl;
    cout << "Difference = " << (a - b) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Divission = " << (a / b) << endl; // only integer number show
    cout << "Module = " << (a % b) << endl;

    double ans = x / (double)y;
    cout << ans << endl;

    return 0;
}