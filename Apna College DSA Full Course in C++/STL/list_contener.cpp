// list container is a doubly linked list
#include <bits/stdc++.h>
#include <list>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(6);
    /* for(int x: l)
     {
         cout << x << " ";
     }
     cout << endl;*/
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "After poping the elements from the list" << endl;
    l.pop_back();
    l.pop_front();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //

    list<int> l1 = {1, 2, 3, 4, 5};
    // size
    cout << l1.size() << endl;
    // erase
    cout << "After erasing 3" << endl;
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        if (*it == 3)
        {
            l1.erase(it);
            break;
        }
    }
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // begin and end
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    // insert
    cout << "After inserting 7 before 2" << endl;
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        if (*it == 2)
        {
            l1.insert(it, 7); // inserts 7 before 2
            break;
        }
    }
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}