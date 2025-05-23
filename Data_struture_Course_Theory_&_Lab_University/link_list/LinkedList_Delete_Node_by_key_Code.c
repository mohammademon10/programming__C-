#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;         
    struct node *next;
} * head;

void createList(int n);
void deleteByKey(int key);
void displayList();


int main()
{
    int n, key;
    printf("Enter number of node to create: ");
    scanf("%d", &n);

    createList(n);

    printf("\nData in list before deletion\n");
    displayList();

    printf("\nEnter element to delete with key: ");
    scanf("%d", &key);
    deleteByKey(key);
    printf("\nData in list after deletion\n");
    displayList();

    return 0;
}
void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Unable to allocate memory. Exiting from app.");
        exit(0);
    }
    
    printf("Enter data of node 1: ");
    scanf("%d", &data);

    head->data = data; // Link data field with data
    head->next = NULL; // Link address field to NULL

    temp = head;
    for (i = 2; i <= n; i++)
    {
        newNode = malloc(sizeof(struct node));
        if (newNode == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }

        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // The newNode should point to nothing

        temp->next = newNode; // Link previous node i.e. temp to the newNode
        temp = temp->next;
    }
    
}
void displayList()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    
    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        
        temp = temp->next; 
    }

    printf("\n");
}

void deleteByKey(int key)
{
    struct node *prev, *cur, *temp;
    temp=head;

    while (temp != NULL && temp->data == key)
    {
        prev = temp;
        temp = temp->next;
        free(prev);

 
        return;
    }

    prev = NULL;
    cur  = head;
    while (cur != NULL)
    {
        if (cur->data == key)
        {
            if (prev != NULL) 
                prev->next = cur->next;

            free(cur);
            return;
        } 

        prev = cur;
        cur = cur->next;
    }
}