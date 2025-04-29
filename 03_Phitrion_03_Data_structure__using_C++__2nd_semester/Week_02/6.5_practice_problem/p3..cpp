// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;

        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_linked_list(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List is empty." << endl;
        return;
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void printMiddle(Node *head)
{
    if (head == NULL)
        return;

    // First, count the number of nodes
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    temp = head;
    int mid = count / 2;

    // Traverse again to the middle
    if (count % 2 == 0)//even number of nodes

    {
        for (int i = 0; i < mid - 1; i++)
        {
            temp = temp->next;
        }
    }
    else
    {
        for (int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }
    }

    // Print middle element(s)
    if (count % 2 != 0)
    {
        // If odd, print the middle element
        cout << temp->val << endl;
    }
    else
    {
        cout << temp->val << " " << temp->next->val << endl;
    }
}

int main()
{
    Node *head = NULL;
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
    cout << "Middle element(s): ";
    printMiddle(head);

    return 0;
}