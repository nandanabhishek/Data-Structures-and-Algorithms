#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// defining structure of node of BST (Binary Search Tree)
struct BSTNode {
    struct BSTNode *left;
    int info;
    struct BSTNode *right;
};




// function for finding the maximum element in a Binary Search Tree
// Recursive Approach
struct BSTNode *find_Max(struct BSTNode *root)
{
    if (root == NULL)
        return root;
    else {
        if (root->right == NULL)
            return root;
        else
            find_Max(root->right);
    }
}
