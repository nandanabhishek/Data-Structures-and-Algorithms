#include <stdio.h>
#include <stdlib.h>

// defining structure of a node
struct node{
    int data;
    struct node *next;
};


// function to insert element after the given value
struct node *insertAfter(struct node *head, int val, int ele)
{
    struct node *ptr=head;
    struct node *newNode= (struct node *)malloc(sizeof(struct node));

    newNode->data=ele;

    if(ptr->data == val && ptr->next == NULL)
    {
        ptr->next=newNode;
        newNode->next=NULL;
        head=ptr;
        return head;
    }
    else if {
        while (ptr->next != NULL) {
            if (ptr->data == val)
                break;
            ptr = ptr->next;
        }
        newNode->next=ptr->next;
        ptr->next=newNode;
        return head;
    }
    else {
        while (ptr != NULL) {
            if (ptr->data == val)
                break;
            ptr=ptr->next;
        }
        newNode->next=ptr->next;
        ptr->next=newNode;
        return head;

    }

}
