#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// defining structure of node of BST (Binary Search Tree)
struct BSTNode {
    struct BSTNode *left;
    int info;
    struct BSTNode *right;
};

struct BSTNode *root=NULL;



// function for Finding element in BST
// Recursive Approach
struct BSTNode *find(struct BSTNode *root, int data) {
    if(root == NULL) {
        return root;
    }
    else {
        if (data < root->info) {
            return (find(root->left, data));
        }
        else if(data > root->info) {
            return ( find (root->right, data) );
        }
        else {
            return root;
        }
    }
}
