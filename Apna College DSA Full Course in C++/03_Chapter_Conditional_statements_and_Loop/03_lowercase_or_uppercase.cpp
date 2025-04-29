#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter The Charecter: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    //if (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}