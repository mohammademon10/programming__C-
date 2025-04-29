//call by value
#include <bits/stdc++.h>
using namespace std;
void fun(int *p)
{
   p=NULL;
}

int main()
{
    int a = 10;
    int *p = &a;
    fun(p); // call by value
    cout << a << endl; // 10
    return 0;
}