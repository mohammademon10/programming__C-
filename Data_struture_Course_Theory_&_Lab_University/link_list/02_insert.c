#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;
node *temp = NULL;
node *newnode = NULL;

void createnode(int n);
void insertAtBeginning(int data);
void insertAtEnd(int data);
void display();

int main()
{
    int n, data, position;

    printf("Number of nodes\n");
    scanf("%d", &n);

    createnode(n);

    printf("Enter data to insert at the beginning\n");
    scanf("%d", &data);
    insertAtBeginning(data);

    printf("Enter data to insert at the end\n");
    scanf("%d", &data);
    insertAtEnd(data);

    printf("Enter data to insert at a specific position\n");
    scanf("%d", &data);
    printf("Enter position to insert data\n");
    scanf("%d", &position);
    insertAtPosition(data, position);

    display();

    return 0;
}


void createnode(int n)
{
    for (int i = 0; i < n; i++)
    {
        newnode = (node *)malloc(sizeof(node));
        if (newnode == NULL)
        {
            printf("Unable to allocate memory\n");
            return;
        }
        printf("Enter the data to store in the linked list\n");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
}

void insertAtBeginning(int data)
{
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
        return;
    }
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(int data)
{
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
        return;
    }
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insertAtPosition(int data, int position)
{
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory\n");
        return;
    }
    newnode->data = data;

    if (position == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        for (int i = 1; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            printf("Position out of bounds\n");
            free(newnode);
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("The linked list is empty\n");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

