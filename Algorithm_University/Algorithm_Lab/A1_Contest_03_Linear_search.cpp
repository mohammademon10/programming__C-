#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n;
    cin >> n;
     int a[n];
    for (int j = 0; j < n; j++)
    {
      cin >> a[j];
    }
    int flage = false;
    for (int j = 0; j < n-1 ; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (a[j] + a[k] == (20 * 100))
        {
          flage = true;
        }
      }
    }
    if (flage == true)
      cout << "Accepted" << endl;
    else
      cout << "Rejected" << endl;
  }

  return 0;
}

//2
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int l,r;
    cin>>l>>r;
    int count=0;
    for(int j=l;j<=r;j++)
    {
        if(j%10==2 || j%10==3 || j%10==9)
        {
            count++;
        }
    }
    cout<<count<<endl;
  }

}

//b
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n ;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int q;
        cin>>q;
        vector<long long int> pre(n);
        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = a[i] + pre[i - 1];
        }
        for (int i = 0; i < q; i++)
        {
            long long int l, r;
            cin >> l >> r;
            l--;
            r--;
            long long int sum = 0;
            if (l == 0)
            {
                sum = pre[r] - 0;
            }
            else
            {
                sum = pre[r] - pre[l - 1];
            }
            cout << sum << endl;
        }
    }
    return 0;
}

//4
#include<iostream>
using namespace std;
int main()
{
     char s[100];
   
    cin.getline(s, 100); 
    int first=0,second=0;
    for(int i=0;i<sizeof(s);i++)
    {
        if(s[i]=='(')
        {
            first++;
        }
        else if(s[i]==')')
        {
            second++;
        }
    }
    if(first-second==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}