#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)//constructor
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node a(10);
    Node b(20);
    Node c(300);

    a.next = &b;
    b.next = &c;

    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}