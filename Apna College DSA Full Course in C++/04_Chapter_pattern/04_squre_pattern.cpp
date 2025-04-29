/*
1 2 3
4 5 6
7 8 9
*/
#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the size of the square: ";
    cin >> n;//3
    int count = 1;//1//2//3

    for (int i = 0; i < n; i++)//line
    {
        
        for (int j = 0; j < n; j++)//column
        {

            cout << count << " ";//1 2 3//4 5 6//7 8 9
            count++; // count = count + 1;
        }
        cout << endl;
    }

    cout<<"After pattern printing count is: "<<count<<endl;
    
    return 0;
}