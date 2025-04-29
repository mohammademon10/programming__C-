#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d",&T);

    int X,Y;
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&X,&Y);
        int result = abs(X-Y);
        printf("%d\n",result);
    }
    
    return 0;
}