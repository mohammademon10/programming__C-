#include <stdio.h>

int main()
{
    int a=20;

    int *ptr=&a;
    *ptr=50;//a data changed

    printf("%d\n",a);//50
  
  return 0;
}