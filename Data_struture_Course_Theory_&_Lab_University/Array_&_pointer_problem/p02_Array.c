//Find the largest elements of an array
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers: ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 

    int max = a[0];
    for(int i=1;i<n;i++)
    {
      if(max<a[i])
      {
        max =a[i];
      }
    }
    printf("The largest Element is = %d\n",max);

    
    return 0;
}