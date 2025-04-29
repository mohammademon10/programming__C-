/*
Q1.Create a tree with the following Numbers and apply post order traversal on it.
10, 13, 7, 15, 7, 26, 16, 71, 29, 22, 26, 66, 54, 14
*/

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
    else // duplicates go to the right subtree
    {
        root->right = insert(root->right, val);
    }

    return root;
}

void postOrder(struct TreeNode *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->val);
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

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    return 0;
}

// output: Post-order traversal: 7 7 14  22 16 26 54 66 29 71 26 15 13 10
