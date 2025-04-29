#include<bits/stdc++.h>
#include<vector>    
using namespace std;
int binarySearch(vector<int> arr, int x)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 5;//element to be searched
    cout << binarySearch(arr, x) << endl;

   
    
    return 0;
}