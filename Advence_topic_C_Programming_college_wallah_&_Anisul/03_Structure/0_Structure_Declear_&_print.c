//Structure_Declaration_&_print

#include <stdio.h>

/*
global variable

struct student
    {
        int id;
        char *name;
    };

*/


int main()
{

    //local variable
    struct student
    {
        int id;
        char *name;
    };

    

    struct student s1;

   s1.id = 1;
   s1.name = "Emon Hossain";
  

   printf("ID: %d\n",s1.id);
   printf("Name: %s\n",s1.name);
  
    return 0;
}



//2nd way
#include <stdio.h>
#include <string.h>

struct student
    {
        int id;
        char name[40];
    };


int main()
{
    

   struct student one;

   one.id = 1;
  
   strcpy(one.name,"Emon Hossain");

   printf("ID: %d\n",one.id);
   printf("Name: %s\n",one.name);
  
    return 0;
}