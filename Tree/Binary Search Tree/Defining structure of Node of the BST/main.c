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
