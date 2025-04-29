//WAP_03_lowercase_to_Uppercase_without_libray_function
/*
a=97
A=65
defference=32

*/

#include <stdio.h>

int main(void)
{
    char lower;
    printf("Enter The Lower Letter : ");
    scanf("%c",&lower);

    printf("The uppercase Letter : %c",lower-32);
    
    return 0;
}