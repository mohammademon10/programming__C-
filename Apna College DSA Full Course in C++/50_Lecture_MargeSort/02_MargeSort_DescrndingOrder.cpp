//Marge Sort Algorithm use recursion(Descending Order)
//time complexity: O(nlogn)
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{
     vector<int> temp;
     int i = start;
     int j = mid + 1;

     while (i <= mid && j <= end)
     {
          if (arr[i] > arr[j])
          {
               temp.push_back(arr[i]);
               i++;
          }
          else
          {
               temp.push_back(arr[j]);
               j++;
          }
     }

     while (i <= mid)
     { // If elements are left in the first part of the array
          temp.push_back(arr[i]);
          i++;
     }

     while (j <= end)
     { // If elements are left in the second part of the array
          temp.push_back(arr[j]);
          j++;
     }

     int indx = 0;
     for (int i = start; i <= end; i++)
     { // Copying the elements of the temp array to the original array
          arr[i] = temp[indx];
          indx++;
     }
}
void mergeSort(vector<int> &arr, int start, int end)
{
     if (start < end)
     {
          int mid = (start + end) / 2;
          mergeSort(arr, start, mid);
          mergeSort(arr, mid + 1, end);
          merge(arr, start, mid, end); // Function to merge the two parts of the array
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

     int n;
     cout << "Enter the size of array: ";
     cin >> n;
     vector<int> arr(n);
     cout << "Enter the elements of array: ";
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     mergeSort(arr, 0, n - 1);
     cout << "Sorted array is: ";
     printArray(arr, n);

     return 0;
}