#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    float i,n,sum=0;
    scanf("%f",&n);
    for(i=1.5;i<=n;i++)
    {
        sum =sum+i;
    }
    printf("%f\n",sum);
    return 0;
}