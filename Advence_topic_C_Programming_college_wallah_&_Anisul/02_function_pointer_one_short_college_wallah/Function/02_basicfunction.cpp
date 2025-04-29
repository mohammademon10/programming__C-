#include <stdio.h>

void england()
{
    printf("you are in england\n"); //6
    return; //7
}
void australia()
{
    printf("you are in australia\n"); //4
    england();//calling england //5
     printf("you are in australia 2nd time\n"); //8
    return; //9
}
void bangladesh()
{
  printf("you are in bangladesh\n");//2
  australia();//calling australia //3
  printf("you are in bangladesh 2nd time\n"); //10
  return; //11
}
int main()//main function use only one time otrewise error
{
  bangladesh();//calling bangladesh  //1
  printf("in main function\n"); //12
  return 0; //13
}