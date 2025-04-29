#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)//number of row
    {
        for(int j=0;j<n;j++)//number of column
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}