//Q1.1*2 + 2*3 + 3*4 +.............+ n1*n2//i=1,j=2

#include <stdio.h>
int main(void)
{
    int n1,n2,sum=0;
    //input
    scanf("%d %d",&n1,&n2);//input 2 numbers

   printf("1*2 + 2*3 + 3*4 + .......+ %d*%d",n1,n2);

    //loop
    int i=1,j=2;
    while(i<=n1 && j<= n2)
    {
     sum = sum+ i*j;
     i++;
     j++;
    }
    printf(" = %d\n",sum);
      
    return 0;
}

/*even
//Q2.1*2 + 2*4 + 3*6 +.............+ n1*n2//i=1,j=2

#include <stdio.h>
int main(void)
{
    int n1,n2,sum=0;
    //input
    scanf("%d %d",&n1,&n2);//input 2 numbers

   printf("1*2 + 2*4 + 3*6 + .......+ %d*%d",n1,n2);

    //loop
    int i=1,j=2;
    while(i<=n1 && j<= n2)
    {
     sum = sum+ i*j;
     i++;
     j=j+2;
    }   
    printf(" = %d\n",sum);
      
    return 0;
}

*/

/*odd
//Q3.1*3 + 2*5 + 3*7 +.............+ n1*n2//i=1,j=3

/*#include <stdio.h>
int main(void)
{
    int n1,n2,sum=0;
    //input
    scanf("%d %d",&n1,&n2);//input 2 numbers

   printf("1*3 + 2*5 + 3*7 + .......+ %d*%d",n1,n2);

    //loop
    int i=1,j=3;
    while(i<=n1 && j<= n2)
    {
     sum = sum+ i*j;
     i++;
     j=j+2;
    }
    printf(" = %d\n",sum);
      
    return 0;
}

*/

/*
when variable input 3 value
//Q1.1*2*3 + 2*3*4 + 3*4*5 +.............+ n1*n2*n3//i=1,j=2,k=3

#include <stdio.h>
int main(void)
{
    int n1,n2,n3,sum=0;
    //input
    scanf("%d %d %d",&n1,&n2,&n3);//input 3 numbers

   printf("1*2*3 + 2*3*4 + 3*4*5 + .......+ %d*%d*%d",n1,n2,n3);

    //loop
    int i=1,j=2,k=3;
    while(i<=n1 && j<= n2)
    {
     sum = sum+ i*j*k;
     i++;
     j++;
     k++;
    }
    printf(" = %d\n",sum);
      
    return 0;
}

*/