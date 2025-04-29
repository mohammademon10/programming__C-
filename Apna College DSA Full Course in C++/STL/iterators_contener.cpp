//iterators_contener.cpp

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 2, 3, 4, 5};
    cout << "Forward: ";

    vector<int>::iterator it;                 // forward // iterator is a pointer to the container
    for (it = v.begin(); it != v.end(); it++) // begin->points to the first element, end->points to the last element
    {
        cout << *it << " "; // dereferencing the iterator
    }
    cout << endl;

    cout << "Reverse: ";
    vector<int>::reverse_iterator it1;             // backward
    for (it1 = v.rbegin(); it1 != v.rend(); it1++) // rbigin->points to last element, rend->points to  the first element
    {
        cout << *it1 << " ";
    }
    cout << endl;

    /* for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
     {
         cout << *it << " ";
     }
   */

    // final version
    cout << "Final version" << endl;
    // auto keyword is used to automatically detect the data type of the variable
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    for (auto it1 = v.rbegin(); it1 != v.rend(); it1++)
    {
        cout << *it1 << " ";
    }

    return 0;
}