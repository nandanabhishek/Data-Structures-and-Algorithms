#include <stdio.h>
#include <stdlib.h>

// defining structure of a node in SLL
struct node{
    int data;
    struct node *next;
};


// function to delete first node of SLL
struct node *delete_Beg(struct node *head){
    struct node *ptr;
    ptr = head; // so that we can free the initial space occupied by head later

    if(head == NULL){
        printf("SLLis empty!");
        return;
    }
    else{
        head=head->next;
        free(ptr);
        return head;
    }

}
