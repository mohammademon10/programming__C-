#include <stdio.h>
#include <stdlib.h>
 struct student
 {
    /* data */
    char name[50];
    int roll;
 };

// struct student s[100];
 
int main()
{
   struct student s[100];

    for(int i=0;i<100;i++)
    {
        printf("Enter student %d data: \n",i+1);

        
        scanf("%s %d",&s[i].name, &s[i].roll);

        printf("Name: %s\nRoll:%d\n",s[i].name,s[i].roll);

          
    }
  
  return 0;
}