//Calculate The Average Of Array Elements
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    //double Average =(double)sum/n;

    printf("Average of the elements = %0.2lf\n",(double)sum/n);//type casting

    
    return 0;
}