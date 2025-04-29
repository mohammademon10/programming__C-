#include<stdio.h>
int main(void)
{
int a=1000000000;
long long int b=20000000000000;
printf("%d\n",a);//only 10 digit print
printf("%lld",b);//upto 10 digit but limitation(2^64-1)

return 0;


}