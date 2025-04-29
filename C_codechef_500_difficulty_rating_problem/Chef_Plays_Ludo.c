#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int T;
    scanf("%d",&T);
    int arr[T];
    for(int i=0;i<T;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<T;i++)
    {
        if(arr[i]==6)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}