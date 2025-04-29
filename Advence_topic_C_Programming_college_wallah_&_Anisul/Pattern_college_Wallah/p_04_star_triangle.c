#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);

    

    for(int i=1;i<=n;i++)//number of row
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
      
        printf("\n");
    }
    
    return 0;
}


