#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int employeeID;
    struct Employee *left;  
    struct Employee *right; 
};

struct Employee *createEmployee(int id);
struct Employee *insertEmployee(struct Employee *root, int id);
void printInOrder(struct Employee *root);

int main()
{
    struct Employee *root = NULL;
    int n, id;

   
    printf("Enter the number of employees: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee ID for employee %d: ", i + 1);
        scanf("%d", &id);

  
        if (i == 0)
        {
            root = createEmployee(id); 
        }
        else
        {
            insertEmployee(root, id); 
        }
    }

    printf("\nEmployees in junior to senior order:\n");
    printInOrder(root);

    return 0;
}


struct Employee *createEmployee(int id)
{
    struct Employee *newEmployee = (struct Employee *)malloc(sizeof(struct Employee));

    newEmployee->employeeID = id;
    newEmployee->left = NULL;
    newEmployee->right = NULL;

    return newEmployee;
}


struct Employee *insertEmployee(struct Employee *root, int id)
{
    if (root == NULL)
    {
        return createEmployee(id);
    }

    if (root->left == NULL)
    {
        root->left = insertEmployee(root->left, id);
    }
    else if (root->right == NULL)
    {
        root->right = insertEmployee(root->right, id);
    }
    else
    {
       
        root->left = insertEmployee(root->left, id);
    }

    return root;
}

void printInOrder(struct Employee *root)
{
    if (root != NULL)
    {
        printInOrder(root->left);
        printf("Employee ID: %d\n", root->employeeID);
        printInOrder(root->right);
    }
}

