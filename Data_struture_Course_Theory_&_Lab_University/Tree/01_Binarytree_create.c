#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
#include <string.h>

 //typedef struct node Node;

 typedef struct node
  {
    int data;
    struct node *left;
    struct node *right;
    
  }Node;

  Node *create_node(int item)
  {
    Node *newnode=(Node*)malloc(sizeof(Node));
    if(newnode==NULL)
    {
        printf("Error! Could not create a new node\n");
        exit(1);
    }
    else
    {
        newnode->data=item;
        newnode->left=NULL;
        newnode->right=NULL;

        return newnode;
    }  
  }

  void add_left_child(Node *node,Node *child)
  {
    node->left=child;
  }
  
  void add_right_child(Node *node,Node *child)
  {
    node->right=child;
  } 

  Node* create_tree()
  {
    //pariental node for 2
    Node* two=create_node(2);
    Node* seven=create_node(7);
    Node* nine=create_node(9);
    add_left_child(two,seven);
    add_right_child(two,nine);

    //pariental node for 7
    Node* one=create_node(1);
    Node* six=create_node(6);
    add_left_child(seven,one);
    add_right_child(seven,six);
    
    //pariental node for 6
    Node* five=create_node(5);
    Node* ten=create_node(10);
    add_left_child(six,five);
    add_right_child(six,ten);

    //pariental node for 9
    Node* eight=create_node(8);
    add_right_child(nine,eight);

    //pariental node for 8
    Node* three=create_node(3);
    Node* four=create_node(4);
    add_left_child(eight,three);
    add_right_child(eight,four);
    

    return two;
  }

int main()
{
    Node* root=create_tree();

    printf("%d\n",root->data);
 
  return 0;
}