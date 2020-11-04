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




// function for finding the minimum element in a Binary Search Tree
// Recursive Approach
struct BSTNode *find_Min(struct BSTNode *root)
{
    if (root == NULL)
        return root;
    else {
        if (root->left == NULL)
            return root;
        else
            find_Min(root->left);
    }
}
