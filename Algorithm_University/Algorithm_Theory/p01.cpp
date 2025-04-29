#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];//
        count[val]++;//
    }
    for (int i = 0; i < n; i++)
    {
        if (count[i] != 0)
        {
            cout << i << " : " << count[i] << endl;
        }
    }
}