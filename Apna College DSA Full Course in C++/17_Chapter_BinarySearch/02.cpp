//use recursion binary search
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int x, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
        return binarySearch(arr, x, mid + 1, high);
    else
        return binarySearch(arr, x, low, mid - 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 5; //element to be searched
    cout << binarySearch(arr, x, 0, arr.size() - 1) << endl;
    return 0;
}
//output: 4