/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) // line
    {
        for (int j = 1; j <= i; j++) // column
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}