#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,n;
        cin>>m>>n;
        (m<n)? cout << "0" << endl : cout << m-n << endl;
    }
    return 0;
}