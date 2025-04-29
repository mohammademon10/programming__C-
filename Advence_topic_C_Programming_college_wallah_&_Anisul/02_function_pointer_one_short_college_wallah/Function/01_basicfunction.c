#include <stdio.h>
void fun()
{
  printf("good morning\n");
  printf("how are you\n");

  return;//end
}
int main()
{
  fun();//call fun function
  fun();
  fun();
    
  return 0;
}

/*
int main()
{
  for(int i=1;i<=3;i++)
  {
   fun();
  }
    
  return 0;
}
*/