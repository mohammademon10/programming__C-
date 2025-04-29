//WAP_04_uppercase_to_lowercase_without_libray_function
/*
a=97
A=65
defference=32

*/

#include <stdio.h>

int main(void)
{
    char upper;
    printf("Enter The Upper Letter : ");
    scanf("%c",&upper);

    printf("The lower Letter : %c",upper+32);
    
    return 0;
}