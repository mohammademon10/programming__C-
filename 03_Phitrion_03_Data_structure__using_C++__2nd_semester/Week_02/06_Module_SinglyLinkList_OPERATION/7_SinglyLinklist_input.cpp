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

void insert_at_tail(Node *&head, int val)
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

void print(Node *head)

{

    Node *temp = head;

    while (temp != NULL)

    {

        cout << temp->val << " ";

        temp = temp->next;
    }

    cout << endl;
}

int main()

{

    Node *head = NULL;

    int x;

    while (1)
    { // infinite loop

        cin >> x; // x ভ্যালু ইনপুট নিচ্ছি

        if (x != -1)
        { // যদি x, -1 না হয় তবে

            insert_at_tail(head, x); // লিঙ্কড লিস্ট এর শেষে insert করে দিচ্ছি
        }

        else
        {

            break; 
        }

        print(head);
    }
    return 0;
}
