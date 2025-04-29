#include <bits/stdc++.h>

using namespace std;

class Node

{

public:
    int val;

    Node *next;

    Node(int val)//constructor

    {

        this->val = val;

        this->next = NULL;
    }
};

int main()

{

    // এখানে আমরা node creation এর কাজটা করে নিচ্ছি।

    Node *head = new Node(10);

    Node *a = new Node(20);

    Node *b = new Node(30);

    Node *c = new Node(40);

    Node *d = new Node(50);

    // এখানে আমরা node গুলোর মধ্যে addresss chain create করছি।

    head->next = a;

    a->next = b;

    b->next = c;

    c->next = d;

    // এখানে আমরা node গুলো head থেকে শুরু করে tail/NULL অব্দি print করছি।

    Node *tmp = head; // প্রথমে একটা temporary node এ headকে রাখছি, যাতে করে head এর মূল value same থাকে।

    // এখানে tmp এর value বা কোন node এর address null না হওয়া অব্দি loop চলবে।

    while (tmp != NULL)

    {

        cout << tmp->val << endl; // node এর value print করছি

        tmp = tmp->next; // tmp node এর মধ্যে তার পরের nodeকে রাখছি।
    }

    // যখন tail এ যাবে অর্থাৎ এই code অনুযায়ী d তে যাবে তখন d->next এ কিন্তু NULL পাবে। তখন tmp = tmp->next = d->next = NULL পাবে। আর loop break হয়ে যাবে।

    return 0;
}
