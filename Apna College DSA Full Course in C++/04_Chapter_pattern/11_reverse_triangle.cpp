/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) // line
    {
        for (int j = i; j >= 1; j--) // column
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;

}