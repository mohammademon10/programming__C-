#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x;
        scanf("%d",&x);
        if(67<=x && 45000>=x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
  
  return 0;
}