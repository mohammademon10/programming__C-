#include <stdio.h>

int main()
{ 
    int n,i;
    printf("How many fiboncci numbers: ");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;

    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


 return 0;

}