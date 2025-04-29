#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;cin>>t;
  while(t--)
  {
    int x,y;cin>>x>>y;
    cout<<7-max(x,y)<<endl;
  }

  return 0;
}