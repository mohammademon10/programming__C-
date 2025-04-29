//Take a singly linked list as input and print the size of the linked list.
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
        cout << endl << "Inserted at head (list was empty)" << endl;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl << "Inserted at tail" << endl;
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
        cout << tmp->val << " -> ";
        tmp = tmp->next;
    }
    cout << "NULL" << endl;
}
void count_nodes(Node* head)
{
    int count = 0;
    Node* tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << "Size of the linked list: " << count << endl;
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

        print_linked_list(head);
        count_nodes(head); // Count and print the size of the linked list
    }

    return 0;
}