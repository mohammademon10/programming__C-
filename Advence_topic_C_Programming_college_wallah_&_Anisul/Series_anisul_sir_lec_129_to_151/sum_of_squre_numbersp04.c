//1^2+2^2+3^2+........+n^29sum of square numbers)


#include <stdio.h>
int main(void)
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum =sum+i*i;
    }
    printf("%d\n",sum);
    return 0;
}