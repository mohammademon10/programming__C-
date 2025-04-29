#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a Node structure for the directory
typedef struct Node
{
    char name[100];             // Name of the directory or file
    int is_directory;           // 1 for directory(folder), 0 for file
    struct Node *parent;        // Pointer to parent node
    struct Node *children[100]; // Pointers to children nodes
    int child_count;            // Number of children
} Node;

// Function to create a new node
Node *createNode(const char *name, int is_directory)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->is_directory = is_directory;
    newNode->parent = NULL;
    newNode->child_count = 0;
    return newNode;
}

// Add a new directory or file
void addNode(Node *parent, const char *name, int is_directory)
{
    if (!parent->is_directory)
    {
        printf("Cannot add to a file.\n");
        return;
    }
    Node *newNode = createNode(name, is_directory);
    newNode->parent = parent;
    parent->children[parent->child_count++] = newNode;
    printf("Added %s to %s\n", name, parent->name);
}

// Delete a directory or file
void deleteNode(Node *node)
{
    if (node->parent == NULL)
    {
        printf("Cannot delete root directory.\n");
        return;
    }
    Node *parent = node->parent;
    for (int i = 0; i < parent->child_count; i++)
    {
        if (parent->children[i] == node)
        {
            for (int j = i; j < parent->child_count - 1; j++)
            {
                parent->children[j] = parent->children[j + 1];
            }
            parent->child_count--;
            break;
        }
    }
    free(node);
    printf("Node deleted successfully.\n");
}

// Rename a directory or file
void renameNode(Node *node, const char *new_name)
{
    strcpy(node->name, new_name);
    printf("Node renamed to %s\n", node->name);
}

// Display contents of a directory
void viewContents(Node *node)
{
    if (!node->is_directory)
    {
        printf("%s is a file.\n", node->name);
        return;
    }
    printf("Contents of directory %s:\n", node->name);
    for (int i = 0; i < node->child_count; i++)
    {
        printf("  - %s (%s)\n", node->children[i]->name,
               node->children[i]->is_directory ? "Directory" : "File");
    }
}

// Depth-First Search (DFS) Traversal
void dfs(Node *node, int depth)
{
    for (int i = 0; i < depth; i++)
        printf("  ");
    printf("%s\n", node->name);
    for (int i = 0; i < node->child_count; i++)
    {
        dfs(node->children[i], depth + 1);
    }
}

// Main Function
int main()
{
    // Create root directory
    Node *root = createNode("Root", 1);

    // Add some directories and files
    addNode(root, "Folder1", 1);
    addNode(root, "File1.txt", 0);
    addNode(root->children[0], "SubFolder1", 1);
    addNode(root->children[0], "File2.txt", 0);

    // Display directory contents
    printf("\nViewing Contents of Root:\n");
    viewContents(root);

    // Rename a node
    renameNode(root->children[0], "NewFolder1");

    // Delete a node
    deleteNode(root->children[1]);

    // Traverse using DFS
    printf("\nDFS Traversal:\n");
    dfs(root, 0);

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char name[100];
    int is_directory;
    struct Node *parent;
    struct Node **children;
    int child_count;
} Node;

typedef struct Stack
{
    Node **nodes;
    int top;
    int capacity;
} Stack;

Node *createNode(const char *name, int is_directory)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->name, name);
    newNode->is_directory = is_directory;
    newNode->parent = NULL;
    newNode->children = NULL;
    newNode->child_count = 0;
    return newNode;
}

void addNode(Node *parent, const char *name, int is_directory)
{
    if (!parent->is_directory)
    {
        printf("Cannot add to a file.\n");
        return;
    }

    Node *newNode = createNode(name, is_directory);
    newNode->parent = parent;
    parent->children = (Node **)realloc(parent->children, (parent->child_count + 1) * sizeof(Node *));
    parent->children[parent->child_count++] = newNode;

    printf("Added %s to %s.\n", name, parent->name);
}

void deleteNode(Node *node)
{
    if (node == NULL)
        return;
    for (int i = 0; i < node->child_count; i++)
    {
        deleteNode(node->children[i]);
    }
    free(node->children);
    free(node);
}

void renameNode(Node *node, const char *new_name)
{
    strcpy(node->name, new_name);
    printf("Node renamed to %s.\n", node->name);
}

void viewContents(Node *node)
{
    if (!node->is_directory)
    {
        printf("%s is a file.\n", node->name);
        return;
    }

    printf("Contents of directory %s:\n", node->name);
    for (int i = 0; i < node->child_count; i++)
    {
        printf("  - %s (%s)\n", node->children[i]->name,
               node->children[i]->is_directory ? "Directory" : "File");
    }
}

Stack *createStack(int capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->nodes = (Node **)malloc(capacity * sizeof(Node *));
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, Node *node)
{
    if (stack->top == stack->capacity - 1)
    {
        stack->capacity *= 2;
        stack->nodes = (Node **)realloc(stack->nodes, stack->capacity * sizeof(Node *));
    }
    stack->nodes[++stack->top] = node;
}

Node *pop(Stack *stack)
{
    return isEmpty(stack) ? NULL : stack->nodes[stack->top--];
}

Node *peek(Stack *stack)
{
    return isEmpty(stack) ? NULL : stack->nodes[stack->top];
}

// DFS Traversal
void dfs(Node *node, int depth)
{
    for (int i = 0; i < depth; i++)
        printf("  ");
    printf("%s\n", node->name);
    for (int i = 0; i < node->child_count; i++)
    {
        dfs(node->children[i], depth + 1);
    }
}

int main()
{
    Node *root = createNode("Root", 1);
    Stack *stack = createStack(10);
    push(stack, root);

    addNode(root, "Folder1", 1);
    addNode(root, "File1.txt", 0);
    addNode(root->children[0], "SubFolder1", 1);
    addNode(root->children[0], "File2.txt", 0);

    printf("\nViewing Contents of Root:\n");
    viewContents(root);

    renameNode(root->children[0], "RenamedFolder1");
    deleteNode(root->children[1]);

    printf("\nDFS Traversal:\n");
    dfs(root, 0);

    printf("\nStack Navigation (DFS Style):\n");
    while (!isEmpty(stack))
    {
        Node *current = pop(stack);
        printf("%s\n", current->name);
        for (int i = current->child_count - 1; i >= 0; i--)
        {
            push(stack, current->children[i]);
        }
    }

    free(stack->nodes);
    free(stack);

    return 0;
}

*/
