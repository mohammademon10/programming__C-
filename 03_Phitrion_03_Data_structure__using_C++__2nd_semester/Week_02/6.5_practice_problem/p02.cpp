//Question: Take a singly linked list as input and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.
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
void check_duplicate(Node* head)
{
    unordered_set<int> seen;
    Node* tmp = head;
    bool hasDuplicate = false;//not found any duplicate value

    while (tmp != NULL)
    {
        if (seen.find(tmp->val) != seen.end())
        {
            hasDuplicate = true;
            break;
        }
        seen.insert(tmp->val);
        tmp = tmp->next;
    }

    if (hasDuplicate==true)
    {
        cout << "The linked list contains duplicate values." << endl;
    }
    else//
    {
        cout << "The linked list does not contain any duplicate values." << endl;
    }
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
        check_duplicate(head);
     
    }
   /* print_linked_list(head);
    check_duplicate(head);*/

    return 0;
}

