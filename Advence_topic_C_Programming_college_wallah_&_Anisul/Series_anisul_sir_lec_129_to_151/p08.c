#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int i,n,odd=0,even=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(i%2==0)
      {
        even=even+i;
      }
      else
      {
        odd=odd+i;
      }
    }
    int sum=odd-even;
    printf("%d",sum);
    return 0;
}
