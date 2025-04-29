
/*
//use struct
#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

int main() {
    // Create a new node with value 10
    Node* node = createNode(10);

    // Print the value of the node
    cout << "Node value: " << node->data << endl;

    // Clean up memory
    delete node;

    return 0;
}*/

// use class
#include <iostream>
using namespace std;

// Define the Node class
class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize the node
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Function to create a new node
Node *createNode(int value)
{
    return new Node(value);
}

int main()
{
    // Create a new node with value 10
    Node *node = createNode(10);

    // Print the value of the node
    cout << "Node value: " << node->data << endl;

    // Clean up memory
    delete node;

    return 0;
}