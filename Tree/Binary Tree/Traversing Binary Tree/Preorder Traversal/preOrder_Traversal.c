#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// defining structure of BST Node
struct node
{
    struct node *left;
    int data;
    struct node *right;
};



// function for preOrder Traversal (Recursive Approach)
void preorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    else {
        printf("\t%d", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
