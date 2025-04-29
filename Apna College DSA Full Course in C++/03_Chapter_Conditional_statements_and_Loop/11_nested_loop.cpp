#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)//line
    {
        int clm =5;
        for (int j = 1; j <= clm; j++)//column
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}