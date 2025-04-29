#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);// Create a new node with the given value
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *head)
{
    if (head == NULL) // Check if the linked list is empty
    {
        cout << "Linked List is empty." << endl;
        return;
    }

    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next; // Move to the next node
    }
    cout << endl;
}

int main()
{
    system("color 1F"); // Navy blue background with white text
    system("cls");// Clear the screen
  
    Node *head = NULL;

   
   /* system("cls");
    cout<<"Do you want to insert at tail? (1/0): ";
    
    
    int op;

    cin>>op;
  

    while(op==1)
    {
        cout<<"Enter the value: ";
        int val;
        cin>>val;
        insertAtTail(head, val);
        cout<<"Do you want to insert at tail? (1/0): ";
        cin>>op;
    }
    */

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);


    display(head);

    return 0;
}
