#include <stdio.h>
#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNode(int val)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode *insert(struct TreeNode *root, int val)
{
    if (root == NULL)
    {
        return createNode(val);
    }
    if (val < root->val)
    {
        root->left = insert(root->left, val);
    }
    else
    { // duplicates go to the right subtree
        root->right = insert(root->right, val);
    }
    return root;
}

// In-order traversal
void inOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        inOrder(root->left);      
        printf("%d ", root->val); 
        inOrder(root->right);     
    }
}

// Post-order traversal
void postOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->val);
    }
}

// Pre-order traversal
void preOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        printf("%d ", root->val); 
        preOrder(root->left);    
        preOrder(root->right);    
    }
}

int main()
{
    struct TreeNode *root = NULL;
    int values[] = {10, 13, 7, 15, 7, 26, 16, 71, 29, 22, 26, 66, 54, 14};
    int size = sizeof(values) / sizeof(values[0]);

    // Insert values into the BST
    for (int i = 0; i < size; i++)
    {
        root = insert(root, values[i]);
    }

    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");

    return 0;
}

//In-order traversal: 7 7 10 13 14 15 16 22 26 26 29 54 66 71 
//Post-order traversal: 7 7 14 22 16 26 54 66 29 71 26 15 13 10 
//Pre-order traversal: 10 7 7 13 15 26 16 71 29 22 26 66 54 14 

