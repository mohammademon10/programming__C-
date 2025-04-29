// pair
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, string> p1 = {1, "Hello"};
    cout << p1.first << " " << p1.second << endl;

    cout << "Pair of pairs integer: ";
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    cout << "Pair of pairs string: ";
    pair<int, pair<string, int>> p3 = {1, {"Hello", 4}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << endl;

    // vector of pairs

    cout << "vector of pairs: " << endl;
    vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
    /*cout<<"vector of pairs using for loop: "<<endl;
    for(pair<int,int> x:v)
    {
      cout<<x.first<<" "<<x.second<<endl;
    }*/

    for (auto x : v) // auto use for automatically detect the data type of the variable
    {
        cout << x.first << " " << x.second << endl;
    }

    /*cout<<"vector of pairs using iterator: "<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
      //cout<<*it.first<<" "<<*it.second<<endl;
        cout<<it->first<<" "<<it->second<<endl;
    }*/

    // insert pair in vector
    cout << "Insert pair in vector(use push): " << endl;
    v.push_back({4, 5});//insert pair when object is already created
    
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout<<"Insert pair in vector(use emplace): "<<endl;
    v.emplace_back(5, 6);//insert pair when object is not created
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}

