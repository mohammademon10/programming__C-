//Deque:Double Ended Queue
//It is a sequence container that allows insertion and deletion from both ends.
//It is similar to vector but more efficient in case of insertion and deletion from both ends.
//It is not contiguous in memory.
//It is implemented as a dynamic array.
//It supports random access.
#include <bits/stdc++.h>
#include <deque>
using namespace std;
#define ll long long

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    deque<int> d = {1, 2, 3, 4, 5};
    for(auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout<<d[2]<<endl;//random access but last contener does not support this(random access)
    cout<<d.at(2)<<endl;//at() is used to access the element at a particular index
    
    
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

  return 0;
}