#include <stdio.h>

int main()
{
int T;
scanf("%d",&T);

int N,X;
for(int i=0;i<T;i++)
{
    scanf("%d %d",&N,&X);
    int result=N - X;
    printf("%d\n",result);
}

 return 0;

}