/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
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
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}