#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    map<string, int> mp;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            string name;
            int marks;
            cin >> name >> marks;
            mp[name] += marks;
        }
        else if (type == 2)
        {
            string name;
            cin >> name;
            mp.erase(name);
        }
        else if (type == 3)
        {
            string name;
            cin >> name;
            cout << mp[name] << endl;
        }
    }

    return 0;
}