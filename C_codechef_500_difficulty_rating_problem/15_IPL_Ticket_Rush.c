#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        if(m<n)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",m-n);
        }
        
    }
  
  return 0;
}



