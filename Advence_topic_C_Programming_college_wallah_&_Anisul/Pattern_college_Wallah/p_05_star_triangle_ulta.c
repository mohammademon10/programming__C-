#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
     int k=n;

    for(int i=1;i<=n;i++)//number of row
    {
        for(int j=1;j<=k;j++)
        {
            printf("* ");
             
        }
        k--;
        printf("\n");
    }
    
    return 0;
}