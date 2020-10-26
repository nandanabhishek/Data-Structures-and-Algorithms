#include <stdio.h>
#include <stdlib.h>

// defining structure of a node
struct node{
    int data;
    struct node *next;
};


// function to insert after a given value in SLL
struct node *insert_after(struct node *head, int val, int ele)
{
    struct node *newNode, *ptr, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    ptr = head;
    temp = ptr;
    newNode -> data = ele;
    while(temp -> data != val) {
        temp = ptr;
        ptr = ptr -> next;
    }
    temp -> next=newNode;
    newNode -> next = ptr;
    return head;

}
