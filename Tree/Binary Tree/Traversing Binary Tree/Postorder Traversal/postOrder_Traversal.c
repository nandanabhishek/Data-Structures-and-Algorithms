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




// function for postOrder Traversal (Recursive Approach)
void postorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    else {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("\t%d", root->data);
    }
}
