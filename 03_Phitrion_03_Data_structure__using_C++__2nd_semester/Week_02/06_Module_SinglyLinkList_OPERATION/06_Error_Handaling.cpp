#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

// Function Prototypes
void insert_at_tail(Node *&head, int v);
void insert_at_head(Node *&head, int v);
void insert_at_position(Node *&head, int pos, int v);
void delete_from_position(Node *&head, int pos);
void delete_from_head(Node *&head);
void print_linked_list(Node *head);
int list_size(Node *head);
void delete_entire_list(Node *&head);

void insert_at_tail(Node *&head, int v)
{
   
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl << "Inserted at head (list was empty)" << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl << "Inserted at tail" << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl << "Inserted at head" << endl;
}

void insert_at_position(Node *&head, int pos, int v)
{
    if (pos < 0)
    {
        cout << "Error: Invalid position." << endl;
        return;
    }

    Node *newNode = new Node(v);
    if (pos == 0)
    {
        insert_at_head(head, v);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp == NULL)
        {
            cout << "Error: Position out of bounds." << endl;
            delete newNode; // Clean up the new node
            return;
        }
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Error: Position out of bounds." << endl;
        delete newNode; // Clean up the new node
        return;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << "Inserted at position " << pos << endl;
}
void delete_from_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Error: Linked List is empty." << endl;
        return;
    }
    Node *tmp = head;
    head = head->next;
    delete tmp;
    cout << "Deleted from head" << endl;
}

void delete_from_position(Node *&head, int pos)
{
    if (head == NULL)
    {
        cout << "Error: Linked List is empty." << endl;
        return;
    }
    if (pos < 0)
    {
        cout << "Error: Invalid position." << endl;
        return;
    }
    if (pos == 0)
    {
        delete_from_head(head);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if (tmp == NULL || tmp->next == NULL)
        {
            cout << "Error: Position out of bounds." << endl;
            return;
        }
        tmp = tmp->next;
    }

    Node *toDelete = tmp->next;
    if (toDelete == NULL)
    {
        cout << "Error: Position out of bounds." << endl;
        return;
    }
    tmp->next = toDelete->next;
    delete toDelete;
    cout << "Deleted from position " << pos << endl;
}

void print_linked_list(Node *head)
{
    cout << endl << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int list_size(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void delete_entire_list(Node *&head)
{
    while (head != NULL)
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main()
{
  

    Node *head = NULL;

    while (true)
    {
        system("color 1F" );//navy blue background

        cout << endl << "==============================" << endl;
        cout << "Choose an option:" << endl;
        cout << "1: Insert at Tail" << endl;
        cout << "2: Print Linked List" << endl;
        cout << "3: Insert at Position" << endl;
        cout << "4: Insert at Head" << endl;
        cout << "5: Delete From Position" << endl;
        cout << "6: Delete From Head" << endl;
        cout << "7: Exit" << endl;
        cout << "==============================" << endl;
        cout << "Enter your option: ";


        int op;
        cin >> op;

        if (cin.fail())
        {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue; // Skip to the next iteration
        }

        if (op == 1)
        {
        
            cout << "Inserting at tail" << endl;
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            insert_at_position(head, pos, v);
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            delete_from_position(head, pos);
        }
        else if (op == 6)
        {
            delete_from_head(head);
        }
        else if (op == 7)
        {
            delete_entire_list(head);
            cout << "Program terminated. Memory cleaned." << endl;
            break;
        }
        else
        {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}
