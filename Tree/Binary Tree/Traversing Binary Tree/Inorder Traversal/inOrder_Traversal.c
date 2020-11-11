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



// function for inOrder Traversal (Recursive Approach)
void inorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    else {
        inorderTraversal(root->left);
        printf("\t%d", root->data);
        inorderTraversal(root->right);
    }
}
