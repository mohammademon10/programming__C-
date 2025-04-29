#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int T,X,N;
    scanf("%d",&T);
    int result,point;
    for (int i=0;i<T;i++)
    {
        scanf("%d %d",&X,&N);
   
         result =X/10;
         point = N*result;
        printf("%d\n",point);
    }
   

    return 0;
}