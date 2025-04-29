/*
Floyd's Triangle Pattern is a right-angled triangular pattern of natural numbers, used in computer science education. It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left corner:
1
2 3
4 5 6
7 8 9 10

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++) // line
    {
        for (int j = 1; j <= i; j++) // column
        {
            cout << count << " ";
            count++;//count=count+1;
        }
        cout << endl;
    }

    return 0;
}