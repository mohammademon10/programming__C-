#include <iostream>
using namespace std;

int main()
{
    // For loop example
    cout << "For loop example:" << endl;
    for (int i = 1; i <= 5; i=i+1)

    {
        cout << "i = " << i << endl;
    }

    // While loop example
    cout << "\nWhile loop example:" << endl;
    int j = 0;
    while (j < 5)
    {
        cout << "j = " << j << endl;
        j++;
    }

    // Do-while loop example
    cout << "\nDo-while loop example:" << endl;
    int k = 0;
    do
    {
        cout << "k = " << k << endl;
        k++;
    } while (k < 5);

    return 0;
}