#include <stdio.h>

struct student
{
    char *department;
    int id;
    char *name;
    
};

int main()
{
    struct student students[3] = {{"CSE",818, "Emon Hossain"},{"CSE", 819, "Sanjida Ali"},{"CSE", 811, "Emran Hossain"}};

    for (int i = 0; i < 3; i++)
    {
        printf("Person %d information:\n", i+1);
        printf("Department: %s\n",students[i].department);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n\n", students[i].name);
    }

    return 0;
}