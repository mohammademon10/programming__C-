/*
Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

*/
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
void insert_at_tail(Node*& head, int v)
{
    Node* newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;

}
void print_linked_list(Node* head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty." << endl;
        return;
    }
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
 
}
void insertAtIndex(Node*& head, int index, int value) {
    Node* newNode = new Node(value);
    if (index < 0) {
        cout << "Invalid" << endl;
        return;
    }
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        cout << "Inserted at index " << index << endl;
        return;
    }
    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp == NULL) {
            cout << "Invalid" << endl;
            delete newNode; // Clean up the allocated memory
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Invalid" << endl;
        delete newNode; // Clean up the allocated memory
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserted at index " << index << endl;
}

int main()
{
    Node* head = NULL;
    
int x;
while (1)
    { 

        cin >> x; 

        if (x != -1)
        { 

            insert_at_tail(head, x); 
        }

        else
        {

            break; 
        }

       
    }
    cout << "Your Linked List: ";
    print_linked_list(head);
    cout << endl;
    
    cout << "Enter index and value to insert (index value):" << endl;

    int index, value;
    while (cin >> index >> value)
    {
        insertAtIndex(head, index, value);
    }


    return 0;
}