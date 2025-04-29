#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) //o(N)  //total complexicity-> O(Nlog(N))
    {
        int x=i;
        while(x>0)//o(log(N))  
        {
            int digit=x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
    }
    return 0;
}