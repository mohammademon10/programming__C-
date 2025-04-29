//Swap numbers in the cyclic order using call by reference

#include <stdio.h>

// Function to swap numbers in a cyclic order
void cyclicSwap(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
 {
    int a, b, c;

    // Ask the user for three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // Swap numbers in a cyclic order
    cyclicSwap(&a, &b, &c);

    printf("After swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}