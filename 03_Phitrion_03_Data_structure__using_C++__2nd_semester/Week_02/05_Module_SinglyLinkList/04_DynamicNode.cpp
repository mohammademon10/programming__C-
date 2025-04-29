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

int main()
{
    // Node head(10);//creating a node statically
    Node *head = new Node(10); // creating a node dynamically
    Node *second = new Node(20);

    head->next = second; // linking head to second

    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << second->val << endl;
    return 0;
}

// explanation:
#include <bits/stdc++.h>

using namespace std;

class Node // আগের মতো করে একটা node class create করবো।

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

int main()

{

    // Node head(10);

    Node *head = new Node(10); // একটা node class এর একটা dynamic pointer object নেয়া হচ্ছে যাতে by default 10 value রাখা হচ্ছে।

    Node *a = new Node(20); // ঠিক একইভাবে 20 value এর একটা object a নেয়া হচ্ছে।

    // এখানে একটা জিনিস খেয়াল করতে হবে এই pointer এ কিন্তু node গুলোর address রাখা হচ্ছে। তাই access করার সময়ও আমাদের এই বিষয়টি মাথায় রাখতে হবে।

    head->next = a; // এইখানে দেখেন আগে আমাদের next এ &a রাখতে হতো। এখন যেহেতু দুইটাই address, তাই directly assign করতে পারছি।

    cout << head->val << endl;

    cout << a->val << endl;

    cout << head->next->val << endl; // এভাবে আমরা head থেকে পরের value টা access করতে পারি।

    return 0;
}