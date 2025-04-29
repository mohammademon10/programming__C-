#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }

    cout << "Sum of all odd numbers up to " << n << " is: " << sum << endl;

    return 0;
}

// 2nd way
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    cout << "Sum of all odd numbers up to " << n << " is: " << sum << endl;

    return 0;
}