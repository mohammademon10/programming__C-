//Remove
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int n;
    scanf("%d",&n);//let 5
    int ar[n];
        for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(int i=pos; i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    for(int i=0;i<n-1;i++)//n-1 korle save hoie thaka memory ar show korbe nah.
    {
        printf("%d ",ar[i]);
    }
     






    return 0;
}