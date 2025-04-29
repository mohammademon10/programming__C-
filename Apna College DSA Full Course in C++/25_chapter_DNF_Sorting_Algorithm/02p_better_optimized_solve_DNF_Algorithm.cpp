// Sort an array of 0s, 1s and 2s
//time complexity: O(n)
//Dutch National Flag Algorithm(DNF Algorithm)
#include <bits/stdc++.h>
using namespace std;
void sortcolor(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else//nums[mid]==2
        {
            swap(nums[high], nums[mid]);
            high--;
        }
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
    sortcolor(nums);
    cout << "Sorted array is: ";
    printArray(nums);

    return 0;
}