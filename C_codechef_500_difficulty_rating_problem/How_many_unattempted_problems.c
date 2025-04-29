#include <stdio.h>
int main(void)
{
    int X,Y;
    // printf("Enter hoe many problem in the begginer section : ");
    scanf("%d %d",&X,&Y);
    // printf("Enter hoe many problem chef attempted : ");
    //scanf("%d",&Y);

    int result=X-Y;

    printf("%d\n",result);

    return 0;
}