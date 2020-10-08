#include <stdio.h>
#include <stdlib.h>

// defining structure of node in a SLL
struct node{
    int data;
    struct node *next;
};


// function to delete element from the end of SLL
struct node *delete_End(struct node *head){
    struct node *ptr, *temp;
    ptr=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    temp=head;

    if(head == NULL){
        printf("SLL is empty!");
        return;
    }
    else{
        while(ptr->next != NULL){
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        free(ptr);

        return head;
    }

}

