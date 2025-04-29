//Quick Sort Algorithm use recursion(Descending Order)
//time complexity: O(nlogn)
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
     int pivot = arr[end];
     int idx = start - 1;
     for (int j = start; j < end; j++)
     {
          if (arr[j] >= pivot)
          {
               idx++;
               swap(arr[idx], arr[j]);
          }
     }
     idx++;
     swap(arr[idx], arr[end]);
     return idx ;
}
void quickSort(vector<int> &arr, int start, int end)
{
     if (start < end)
     {
          int pivIdx = partition(arr, start, end);
          quickSort(arr, start, pivIdx - 1);
          quickSort(arr, pivIdx + 1, end);
     }
}
void printArray(vector<int> &arr, int n)
{
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
}
int main()
{
     vector<int> arr = {1, 3, 2, 4, 5};
     int n = arr.size();
     quickSort(arr, 0, n - 1);
     printArray(arr, n);
     return 0;
}