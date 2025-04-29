#include <stdio.h>

int main()
{
    int a=10;

    int *ptr=&a;
    //adress
    printf("%p\n",ptr);//address of a..hold in ptr//0061ff18
    printf("%p\n",&a);//0061ff18

    printf("%p\n",&ptr);//address of pointer

    //data
    printf("%d\n",a);
    printf("%d\n",*ptr);//dereference

  
  return 0;
}