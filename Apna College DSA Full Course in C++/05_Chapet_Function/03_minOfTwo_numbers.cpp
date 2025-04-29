#include <iostream>
using namespace std;

int minOfTwo(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << minOfTwo(a, b) << endl;
}