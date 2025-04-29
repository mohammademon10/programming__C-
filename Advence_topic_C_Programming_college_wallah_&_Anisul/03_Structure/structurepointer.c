#include <stdio.h>
struct student
{
    int roolno;
    char* name;
    float marks;
}s1;
//struct student s1={10,"Emon",85.5};

int main()
{
    struct student *ptr =&s1;//ptr er modhe s1 er address hold kore rakhci

    s1.roolno=01;
    s1.name="Emon";
    s1.marks=85.55;

    printf("Rool no: %d\n",ptr->roolno);//01
    printf("Rool no: %d\n",s1.roolno);//01
    printf("Rool no: %d\n",(*ptr).roolno);//01

    printf("\nRool no: %d\nName: %s\nMarks:%0.2f\n",ptr->roolno,ptr->name,ptr->marks);
  
  return 0;
}