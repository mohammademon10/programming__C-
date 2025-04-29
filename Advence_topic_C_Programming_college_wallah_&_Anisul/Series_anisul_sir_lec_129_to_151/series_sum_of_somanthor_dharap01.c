//Q1. 1 + 2 + 3 +........+N//want sum//somanthor dhara( )
//for loop

#include <stdio.h>
int main(void)
{
    int n,sum=0;
    //input
    scanf("%d",&n);
    printf("1 + 2 + 3+..........+ %d ",n);//uotput sundhor er jonno
    //loop
    for(int i=1; i<=n;i++)
    
    {
     sum = sum+i;
    }
    printf("= %d\n",sum);
      
    return 0;
}
/*

//Q2. 1 + 3 + 5 +........+N//want sum of  odd number

#include <stdio.h>
int main(void)
{
    int n,sum=0;
    //input
    scanf("%d",&n);
    printf("1 + 3 + 5+..........+ %d ",n);//odd number
    //loop
    for(int i=1; i<=n; i+=2)
    
    {
     sum = sum+i;
    }
    printf("= %d\n",sum);
      
    return 0;
}
*/

/*

//Q3. 2 + 4 + 6 +........+N//want sum of  even number 

#include <stdio.h>
int main(void)
{
    int n,sum=0;
    //input
    scanf("%d",&n);
    printf("2 + 4 + 6+..........+ %d ",n);//even number er jonno
    //loop
    for(int i=2; i<=n;i+=2)
    
    {
     sum = sum+i;
    }
    printf("= %d\n",sum);
      
    return 0;
}
*/

//while loop use--Q1

/*
#include <stdio.h>
int main(void)
{
    int n,sum=0,i=1;
    //input
    scanf("%d",&n);
    printf("1 + 2 + 3+..........+ %d ",n);//uotput sundhor er jonno
    //loop
   while(i<=n)
    
    {
     sum = sum+i;
     i++
    }
    printf("= %d\n",sum);
      
    return 0;
}


*/
