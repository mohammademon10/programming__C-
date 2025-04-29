/*
A
B B
C C C
D D D D
E E E E E
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A'; // A//B//C//D//E

    for (int i = 1; i <= n; i++) // line
    {

        for (int j = 1; j <= i; j++) // column
        {
            cout << ch << " "; // A//B B//C C C//D D D D//E E E E E
        }

        ch++; // ch=ch+1;// ch=66=>B//67=>C//68=>D//69=>E
        cout << endl;
    }

    return 0;
}