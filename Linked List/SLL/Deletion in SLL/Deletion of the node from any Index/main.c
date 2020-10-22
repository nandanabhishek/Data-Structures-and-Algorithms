#include <stdio.h>
#include <stdlib.h>

// defining structure of a node in SLL
struct node{
    int data;
    struct node *next;
};


// function to delete node from any index in SLL
struct node *delete_at_index(struct node *head, int pos, int count){
    struct node *ptr, *temp;
    int ind=0;
    ptr=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    temp=head;

    if(head == NULL){
        printf("List is empty!");
        return;
    }
    else{
        if(pos==0 || pos < 0){
            return delete_Beg(head);
        }
        else if(pos == count - 1 || pos >= count ){
            return delete_End(head);
        }
        else{
            while(ptr != NULL || ind < pos){
                ind++;
                ptr=temp;
                temp=temp->next;
            }
            ptr->next = temp->next;
            free(temp);

            return head;
        }

    }

}


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
