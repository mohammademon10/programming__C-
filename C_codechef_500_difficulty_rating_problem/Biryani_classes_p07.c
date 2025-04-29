#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int T;
    scanf("%d",&T);
   
    for(int i=1;i<=T;i++)
  
    {
       int a,b;
       
        scanf("%d %d",&a,&b);
    
        printf("%d\n",a*b);
        
    }

    return 0;
}