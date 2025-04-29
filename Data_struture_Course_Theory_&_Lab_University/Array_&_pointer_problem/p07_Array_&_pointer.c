//Access elements of an array using pointers

//1st way
#include <stdio.h>

int main()
 {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // ptr points to the first element of arr

    // Accessing elements of arr using ptr
    printf("Element at index 0: %d\n", *ptr);//arr[0]
    printf("Element at index 1: %d\n", *(ptr + 1));//arr[1]
    printf("Element at index 2: %d\n", *(ptr + 2));//arr[2]
    printf("Element at index 3: %d\n", *(ptr + 3));//arr[3]
    printf("Element at index 4: %d\n", *(ptr + 4));//arr[4]

    return 0;
}

//2nd way use loop
#include <stdio.h>

int main()
 {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;  // ptr points to the first element of arr

    // Traverse the array using ptr
    for (int i = 0; i < 5; i++) 
    {
        printf("Element at index %d: %d\n", i, *ptr);
        ptr++;  // Move ptr to the next element
    }

    return 0;
}

//3rd_user input

#include <stdio.h>

int main()
 {
    int n;  // Array size

    // Ask the user for the array size
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array with the user-specified size
    int *ptr = arr;  // ptr points to the first element of arr



    // input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", ptr);  // Read the element and store it in the array
        ptr++; // Move ptr to the next element
    }

    // Reset ptr to the beginning of the array
    ptr = arr;

    // print
    for (int i = 0; i < n; i++)
    {
        printf("Element at index %d: %d\n", i, *ptr);
        ptr++;  // Move ptr to the next element
    }

    return 0;
}


