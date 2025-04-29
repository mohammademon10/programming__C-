#include <stdio.h>
void swap(int* x, int* y)
{
    int temp;

    temp= *x;
    *x = *y;
    *y = temp;

    return ;
}

int main()
{
    int a=10,b=20;

    swap(&a,&b);//pass address

    printf("%d\n",a);
    printf("%d\n",b);
  
    return 0;
}