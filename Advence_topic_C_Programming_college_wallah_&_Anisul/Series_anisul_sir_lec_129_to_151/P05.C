#include <stdio.h>
int main(void)
{
    double i,n,sum=0;
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
    }
    printf("%lf",sum);
    
    return 0;
}// just show sum

/*
#include <stdio.h>
int main(void)
{
    double i,n,sum=0;
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
        if(i==1)
        {
            printf("\n1 + ");
        }
        else if(i==n)
        {
            printf("1/%
            lf",i);
        }
        else
        {
            printf("1/%lf+",i);
        }
    }
    printf("%lf\n",sum);
    
    return 0;
}

*/
//output:1+1/2+1/3+........1/n = sum