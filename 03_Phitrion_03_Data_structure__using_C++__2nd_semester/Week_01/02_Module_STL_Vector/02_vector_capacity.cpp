#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    cout<<v.max_size()<<endl; //536870911

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;//capacity 2X inciresed

    v.clear();//->all vector size = 0 but memory not delete so value given;

    v.resize(2);//change the size of vector
    v.resize(7,100);

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    //v.empt()->return true/false if the vector is empty or not

    return 0;
}