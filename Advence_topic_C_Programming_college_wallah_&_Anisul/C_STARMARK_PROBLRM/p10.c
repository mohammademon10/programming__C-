//Given a time (hours asH and minutes as M), determine the smaller angle between the two hands of a clock showing the time and print it. 

#include<stdio.h>
#include<math.h>

int main()
{
int H,M;
scanf("%d %d",&H,&M);
 if (H>12 || M>60)
  {
  printf("Invalid input!\n");
  }
double angel =fabs((60*H - 11*M)/2.0);//fabs-porman floating number er jonno.......&20. er .0 is type casting
if(angel >= 180)
{
 printf("%lf",360-angel); 
}
else
{
printf("%lf",angel);
}

return 0;
}
