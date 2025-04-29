#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int prev=i-1;
        while(arr[prev]>current && prev>=0)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;//PLACING THE ELEMENT AT ITS CORRECT POSITION.
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"Sorted array is: ";
    printArray(arr,n);

   
    
    return 0;
}