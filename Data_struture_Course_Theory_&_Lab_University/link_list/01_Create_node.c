//Q1.create node and display

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
} Node;

Node *head = NULL;
Node *temp = NULL;
Node *newnode = NULL;

void create_node(int n);
void display();


int main()
 {
    int n;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    create_node(n);
    display();

    return 0;
}

void create_node(int n)
 {
    for (int i = 1; i <= n; i++)
     {
       Node* newnode = (Node *)malloc(sizeof(Node));

        if (newnode == NULL)
        {
            printf("Unable to allocate memory\n");
            return;
        }

        printf("Enter the data to store in the node %d: ",i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) 
        {
            head = newnode;
            temp = newnode;
        }
        else//head!=Null 
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
}

void display() 
{
    if (head == NULL) 
    {
        printf("List is empty\n");
        return;
    }

    temp = head;

    while (temp != NULL)
     {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

