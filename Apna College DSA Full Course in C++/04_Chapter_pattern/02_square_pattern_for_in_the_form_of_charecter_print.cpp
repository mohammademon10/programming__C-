#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // in the form of characters
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << ch;
            // ch++;
            ch = ch + 1; // 65+1=66=>B
        }
        cout << endl;
    }

    /* for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << char('A' + j);
         }
         cout << endl;
     }*/

    return 0;
}