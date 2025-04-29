/*
A B C
D E F
G H I
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;                    // 3
    char ch = 'A';               // A//B//C
    for (int i = 1; i <= n; i++) // line//1//2//3
    {
        for (int j = 1; j <= n; j++) // column//1//2//3
        {
            cout << ch << " "; // A B C//D E F//G H I
            ch++;              // ch=ch+1; // B//C//D
        }
        cout << endl;
    }
    return 0;
}