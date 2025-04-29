//Find the largest number (Dynamic memory allocation is used)

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;  // Number of elements

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    // Ask the user for the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", arr + i);
    }

    // Find the largest number in the array
    int max = *(arr);  // Initialize max with the first element
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    printf("Largest number: %d\n", max);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}