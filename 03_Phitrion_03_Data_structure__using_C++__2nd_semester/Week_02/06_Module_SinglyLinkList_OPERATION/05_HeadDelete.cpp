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

void delete_head(Node *&head){

    Node* delete_node = head; // Delete_node এ head কে স্টোর করে রাখলাম
   
    head = head->next; //head এ head->next স্টোর করে রাখি 
   
    delete delete_node; // delete_node কে delete করে দিলাম 
   
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
    cout << "Before Deletion Head: ";
    display(head);
    delete_head(head); // Call the function to delete the head node
    cout << "After Deletion Head: ";
    display(head); // Display the linked list after deletion


    return 0;
}