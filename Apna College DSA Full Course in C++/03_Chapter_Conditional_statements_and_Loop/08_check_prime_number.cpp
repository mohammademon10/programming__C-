#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not a prime number" << endl;
            break;
        }

        else
        {
            cout << "Prime number" << endl;
            break;
        }
    }

    return 0;
}

// 2nd way
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isprime = true;

    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0) // not a prime number
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }

    return 0;
}

//isprime -> true; -> prime number
//isprime -> false; -> not a prime number