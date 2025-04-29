#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    int a[T];

    for(int i=1;i<=T;i++)
    {
       scanf("%d",&a[i]);
   
    }
    for(int i=1;i<=T;i++)
    {
        if(a[i]<=10)
        {
            printf("YES\n");
        }
        else if(a[i]>10) 
        {
            printf("NO\n");
        }
     }

    return 0;
}
