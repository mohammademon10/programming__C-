#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int X,Y;
    scanf("%d %d",&X,&Y);
     int clear_days=7-(X+Y);
     printf("%d",clear_days);
    return 0;
}