#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// defining structure of node of BST (Binary Search Tree)
struct BSTNode {
    struct BSTNode *left;
    int info;
    struct BSTNode *right;
};



// function for Inserting an element in Binary Search Tree
// Recursive Approach
struct BSTNode *insert(struct BSTNode *root, int data)
{
    if ( root == NULL) {
        root = (struct BSTNode *) malloc (sizeof(struct BSTNode));
        if (root == NULL) {
            printf("\n No memory Allocated!");
        }
        else {
            root->info = data;
            root->left = root->right = NULL;
        }
    }
    else {
        if ( data < root->info  ) {
            root->left = insert(root->left, data);
        }
        else if(data > root->info ) {
            root->right = insert(root->right, data);
        }
    }
    return root;
}
