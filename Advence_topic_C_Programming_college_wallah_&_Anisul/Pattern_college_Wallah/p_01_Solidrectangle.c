#include <stdio.h>

int main(void)
{
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)//number of row
    {
        for(int j=0;j<m;j++)//number of column
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}