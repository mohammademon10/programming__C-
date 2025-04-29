// Sort an array of 0s, 1s and 2s
//time complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
void SortColors(vector<int> &nums)
{
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count0++;
        }
        else if (nums[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        nums[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        nums[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        nums[i] = 2;
    }
}
void printArray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main()
{

    int s;
    cout << "Enter the size of array: ";
    cin >> s;
    vector<int> nums(s);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> nums[i];
    }
    SortColors(nums);
    cout << "Sorted array is: ";
    printArray(nums);

    return 0;
}