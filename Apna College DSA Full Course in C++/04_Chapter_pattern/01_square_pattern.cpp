#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the 1st square: ";
    cin >> n;
    // in the form of numbers
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int m;
    cout << "Enter the size of the 2nd square: ";
    cin >> m;
    // in the form of stars
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }

    return 0;
}