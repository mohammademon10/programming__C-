#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int N,K;
    scanf("%d %d",&N,&K);

    for(int i=0;i<N;i++)
    {
     for(int j=1;j<=K;j++)
     
     {
      printf("%d ",j);
     }

     printf("\n");

    }
   

    return 0;
}