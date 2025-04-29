//Calculate standard deviation 
//find mean and standard deviation
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d",&n);
    double a[n];
    printf("Enter %d integers: ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
    }

    //average value
    double sum1=0.0;
    for(int i=0;i<n;i++)
    {
        sum1 = sum1 + a[i];
    }
    double mean =sum1/n;

    //standard divition
    double sum2=0.0;
     for(int i=0;i<n;i++)
    {
        sum2 = sum2 +pow((a[i]-mean),2);
    }

    double variance = sum2 / n;
    // Calculate the standard deviation
    double std_deviation = sqrt(variance);

    // Output the result
    printf("Arithmetic mean = %0.2lf\n",mean);
    printf("Standard deviation: %.2lf\n", std_deviation);

    return 0;
}
