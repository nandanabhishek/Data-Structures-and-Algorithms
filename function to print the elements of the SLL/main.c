#include <stdio.h>
#include <stdlib.h>

// defining structure of node
struct node{
    int data;
    struct node *next;
};



//function to print element of linked list
void display(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;

    printf("\t");
    while(ptr != NULL)
    {
        printf(" %d  ", ptr -> data);
        if(ptr->next != NULL){
            printf("->");
        }
        ptr = ptr -> next;
    }

}


