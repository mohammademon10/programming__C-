#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v2={101,102,103,104};

    v.insert(v.begin()+1,100);//1 100 2 3 4 5

    v.insert(v.begin()+2,v2.begin(),v2.end());//others vector value insert

    for(int x: v)//x er modhe just value dukbe but 
    {
        cout<<x<<" ";
    }
    return 0;
}