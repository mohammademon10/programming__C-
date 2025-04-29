#include <stdio.h>
#include <stdlib.h>

typedef struct Employee
{
    int employee_id;
    struct Employee *left;
    struct Employee *right;
} Employee;

Employee *createEmployee(int id)
{
    Employee *newEmployee = (Employee *)malloc(sizeof(Employee));
    if (newEmployee == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    newEmployee->employee_id = id;
    newEmployee->left = NULL;
    newEmployee->right = NULL;
    return newEmployee;
}

void printTree(Employee *root, int level)
{
    if (root == NULL)
        return;
    printTree(root->right, level + 1);
    for (int i = 0; i < level; i++)
        printf("  ");
    printf("%d\n", root->employee_id);
    printTree(root->left, level + 1);
}

int main()
{
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    Employee *root = NULL; // Start with an empty tree.  You'll need a more sophisticated way to build the tree based on user input for a real system.

    if (numEmployees > 0)
    {
        printf("Enter CEO's ID: ");
        int ceoID;
        scanf("%d", &ceoID);
        root = createEmployee(ceoID);
        // Add more employees (manually for this example).
        root->left = createEmployee(2);
        root->right = createEmployee(3);
        // Add more levels as needed...
    }

    printf("Employee Hierarchy (Junior to Senior):\n");
    printTree(root, 0);

    // Remember to free the dynamically allocated memory to avoid leaks.
    // This is omitted for brevity.

    return 0;
}
