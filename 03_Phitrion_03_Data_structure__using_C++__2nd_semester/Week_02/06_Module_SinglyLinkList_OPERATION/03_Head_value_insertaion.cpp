#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
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
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);// Create a new node with the given value
    newNode->next = head; // Point the new node to the current head
    head = newNode; // Update the head to point to the new node
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
  
  
    Node *head = NULL;

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    cout<<"Before inserting at head: "<<endl;
    display(head);
    
    insertAtHead(head, 5);// Insert at head
    cout<<"After inserting at head: "<<endl;
    display(head);
    




    return 0;
}