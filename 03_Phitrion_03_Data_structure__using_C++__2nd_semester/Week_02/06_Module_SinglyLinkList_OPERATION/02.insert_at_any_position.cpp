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
    Node *newNode = new Node(val);
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
void insertAtAnyPosition(Node *&head, int val, int pos)
{
    Node *newNode = new Node(val);
    if (pos == 1)//inserting at the beginning
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)//if the position is greater than the length of the linked list
    {
        cout << "Position not found" << endl;
        return;
    }
    newNode->next = temp->next;//connect the new node to the next node of the temp node
    temp->next = newNode;//connect the temp node to the new node
}
void display(Node *head)
{
    Node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    cout << "Before inserting at any position: ";
    display(head);
    cout << endl;

    insertAtAnyPosition(head, 40, 2);
    cout << "After inserting at any position: ";
    display(head);
    cout << endl;

    return 0;
}