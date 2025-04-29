#include <stdio.h>
int add(int x,int y)//main function a & b or add function x & y not same.
{
   return x+y;
   
}

int main()
{
    int a;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    int sum =add(a,b);//pass value add funtion not a,b

    printf("sum = %d\n",sum);
    
    return 0;
}