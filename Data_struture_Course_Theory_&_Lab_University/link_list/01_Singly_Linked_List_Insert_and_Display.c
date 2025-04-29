/*
 q1.1singly linked list in C with functionality to insert 
 elements at the beginning and display the list.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;

void insertatbegin(int data);
void printList();

void main()
{
   insertatbegin(10);
   insertatbegin(20);
   insertatbegin(30);
   insertatbegin(40);
   insertatbegin(50);
   insertatbegin(60);

   // print list
   printf("Linked List: ");
   printList();
}


//insertion at the beginning
void insertatbegin(int value)
{


   struct node *newnode = (struct node*) malloc(sizeof(struct node));

   newnode->data = value;
   newnode->next = NULL;

    if (head == NULL) //1st node only
        {
            head = newnode;
            temp = newnode;
        }
        else//head!=Null 
        {
            temp->next = newnode;
            temp=newnode;
           // temp = temp->next;
        }

}

// display the list
void printList()
{
   temp = head;

   //start from the beginning
   while(temp != NULL) 
   {
      printf("%d ",temp->data);
      temp = temp->next;
   }
 
}



