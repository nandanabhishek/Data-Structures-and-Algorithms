
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// defining structure of node of BST (Binary Search Tree)
struct BSTNode {
    struct BSTNode *left;
    int info;
    struct BSTNode *right;
};



// function to search an element in BST
// Iterative Approach
struct BSTNode *find(struct BSTNode *root, int data) //Non recursive version
{
    if(root == NULL)
        return NULL;

    while ( root )
    {
        if (root->info == data)
            return root; // Element node address
        else if(root->info > data)
            root = root->left;
        else
            root = root->right;
    }

    return NULL; // if element not found

}
