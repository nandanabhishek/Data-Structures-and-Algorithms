#include <stdio.h>
#include <stdlib.h>


// defining structure of a node of SLL
struct node{
    int data;
    struct node *next;
};




// function to delete element from beginning of a SLL and return
struct node *deleteBeg(struct node *head){
    struct node *ptr;
    ptr=head;

    // if the SLL has no node
    if(head==NULL){
        printf("SLL is empty!");
        return;
    }
    else {
        head = head->next;
        free(ptr);
        return head;
    }

}


