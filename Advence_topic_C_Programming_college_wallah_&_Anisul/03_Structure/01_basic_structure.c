//Structure_Declaration_&_print

#include <stdio.h>



struct student
    {
        int id;
        char *name;
        char *department;
    }s1,s2,s3;//struct student s1,s2,s3;//same


//struct student s1,s2,s3;//global


int main()
{

  //struct student s1,s2,s3;//local
  
   s1.id = 818;
   s1.name = "Emon Hossain";
   s1.department = "CSE";

   printf("person one information:\n");
   printf("Department: %s\n",s1.department);
   printf("ID: %d\n",s1.id);
   printf("Name: %s\n",s1.name);

   s2.id = 819;
   s2.name = "Sanjida Ali";
   s2.department = "CSE";

   printf("\nperson two information:\n");
   printf("Department: %s\n",s2.department);
   printf("ID: %d\n",s2.id);
   printf("Name: %s\n",s2.name);

   s3.id = 811;
   s3.name = "Emran Hossain";
   s3.department = "CSE";
   
   printf("\nperson three information:\n");
   printf("Department: %s\n",s3.department);
   printf("ID: %d\n",s3.id);
   printf("Name: %s\n",s3.name);
  
  
    return 0;
}