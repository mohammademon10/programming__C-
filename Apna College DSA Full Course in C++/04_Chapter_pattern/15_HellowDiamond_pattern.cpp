/*
Hollow Diamond Pattern
n=4;

        *            
      *   *
    *       *
  *           *
    *       *
      *   *
        *

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;//4

    for (int i = 1; i <= n; i++)//upper half//1,2,3,4
    {
        for (int j = 1; j <= n - i; j++)//spaces//3,2,1,0``````
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)//stars
        {
            if (j == 1 || j == 2 * i - 1)//first and last star
            {
                cout << "* ";
            }
            else//spaces
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)//reverse
    {
        for (int j = 1; j <= n - i; j++)//
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)//
        {
            if (j == 1 || j == 2 * i - 1)//first and last star
            {
                cout << "* ";
            }
            else//spaces
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
