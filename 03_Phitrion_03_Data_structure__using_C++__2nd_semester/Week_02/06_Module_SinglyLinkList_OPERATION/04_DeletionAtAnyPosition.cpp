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
void delete_at_position(Node *&head, int position)

{

 

 Node *temp = head;

 

 for (int i = 1; i <= position - 1; i++) // আগের লজিক ব্যবহার করে tmp কে যে index এ Node ডিলিট করতে হবে ঐ পজিশনে নিয়ে গেলাম

 {

 temp = temp->next;

 }

 Node* delete_node = temp->next; // temp->next কে delete_node এ স্টোর করে রাখলাম যাতে পরবর্তীতে delete করতে পারি। 

 temp->next = temp->next->next; // temp->next এ যে Node ডিলিট করতে হবে তার পরবর্তী Node রেখে দিলাম 

 delete delete_node; // ঐ নোড ডিলিট করে দিলাম 

}

void desplay(Node *head)
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
    insertAtTail(head, 40);
    cout << "Linked List before deletion: ";
    desplay(head);
    delete_at_position(head, 2); // Delete node at position 2 (0-based index)
    cout << "Linked List after deletion: ";
    desplay(head);


    return 0;
}