#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data1;
    char data2;
    float data3;
    struct Node *next;
} Node;

// Function to add a node to the beginning of the list
void addNode(Node **head, int data1,char data2,float data3)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    newNode->data1 = data1;
    newNode->data2 = data2;
    newNode->data3 = data3;

    newNode->next = *head;
    *head = newNode;
    
}

// Function to print the linked list
void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        printf("%d %c %lf", current->data1,current->data2,current->data3);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int numNodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    Node *head = NULL;

    int data1;
    char data2;
    float data3;

    for (int i = 0; i < numNodes; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data1);
         scanf("%c", &data2);
          scanf("%lf", &data3);
        addNode(&head, data1,data2,data3);
    }

    printf("Linked list: ");
    printList(head);

    // Free the dynamically allocated memory (important to prevent leaks!)
    Node *current = head;
    while (current != NULL)
    {
        Node *next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
