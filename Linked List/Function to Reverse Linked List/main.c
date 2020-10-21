#include <stdio.h>
#include <stdlib.h>


// Definition for singly-linked list.
struct Node {
    int data;
    struct Node *next;
};



struct Node *reverseList(struct Node *head) {
    struct Node *prev=NULL;
    struct Node *curr=head;
    struct Node *next=NULL;

    while(curr != NULL) {
        next = curr->next; // Store next

        // Reverse current node's pointer
        curr->next = prev;

        // Move pointers one position ahead.
        prev = curr;
        curr = next;

    }
    head=prev;
    return head;

}
