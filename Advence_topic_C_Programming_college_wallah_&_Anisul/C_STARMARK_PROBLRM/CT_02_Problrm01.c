#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i+=2)
    {
    if(i%2!=0)//odd number condition
    
    printf("%d ",i);//aie jaiegaie print korte hobe
    
    sum =sum+i;//sum of total odd numbers

    }
   
    printf("\n%d",sum);
   
    return 0;
}
