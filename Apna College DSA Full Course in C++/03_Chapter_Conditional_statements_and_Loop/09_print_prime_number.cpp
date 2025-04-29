#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    
    for (int i = 2; i <= n - 1; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else
            {
                cout << i << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}