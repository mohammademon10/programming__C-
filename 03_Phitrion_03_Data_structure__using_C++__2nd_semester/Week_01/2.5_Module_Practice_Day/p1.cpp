#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  vector<int> b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  vector<int> c(2 * n);

  c = b;

  // c.insert(c.begin()+2,a.begin(),a.end());
  c.insert(c.end(), a.begin(), a.end());

  /* for(int x: c)
    {
        cout<<x<<" ";
    }*/
  for (int i = 0; i < c.size(); i++)
  {
    cout << c[i] << " ";
  }

  return 0;
}