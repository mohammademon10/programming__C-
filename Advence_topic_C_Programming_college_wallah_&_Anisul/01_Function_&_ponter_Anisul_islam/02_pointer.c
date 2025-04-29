#include<stdio.h>
int main()
{
    int x=10;
    int *ptr = &x;

   // ptr = &x;

    
    printf("Value of x = %d\n",x);
    printf("Address of x = %p\n",&x);
    printf("Address of x = %p\n",ptr);
    printf("Value of x = %d\n",*ptr);
    printf("Address of pointr = %p\n",&ptr);

    return 0;
}