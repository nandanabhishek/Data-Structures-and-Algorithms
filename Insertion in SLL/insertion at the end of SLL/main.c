#include <stdio.h>
#include <stdlib.h>

// defining structure of a node
struct node{
    int data;
    struct node *next;
};


void display(struct node *head)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr = head;
    while(ptr != NULL)
    {
        printf(" %d ", ptr -> data);
        if(ptr->next != NULL){
            printf("->");
        }
        ptr = ptr -> next;
    }
    free(ptr);
}


//function to insert element(node) at the end of linked list
struct node *insert_end(struct node *head, int ele)
{
    struct node *new_node, *ptr;
    new_node=(struct node *)malloc(sizeof(struct node));
    ptr=head;

    new_node->data= ele;
    new_node->next= NULL;

    if(ptr == NULL){
        ptr=new_node;
        head=ptr;
    }
    else {

        // Traverse to the last node
        while (ptr != NULL && ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node; // Link address part
    }

    return head;

}


// main function
int main()
{
    int n, ele;
    struct node *sll;
    sll=(struct node *)malloc(sizeof(struct node));
    sll=NULL;

    printf("Enter the total no of node in SLL: ");
    scanf("%d",&n);

    printf("\nEnter the elements to be inserted at the end of SLL:\n");

    for(int i=0; i<n; i++){
        printf("\n");
        scanf("%d",&ele);
        sll= insert_end(sll, ele);
        display(sll);
        printf("\n");
    }

    printf("\nTHe entered SLL is:\n");
    display(sll);

    return 0;

}
