#include <stdio.h>
#include <stdlib.h>

// defining structure of node
struct node{
    int data;
    struct node *next;
};


//function to insert at the beginning of linked list
struct node *insert_beg(struct node *head, int ele)
{
    struct node *new_node, *ptr;
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr=head;

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node -> data= ele;
    new_node -> next= ptr;

    head=new_node;
    return head;

}


//function to print element of linked list
void display(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr = head;

    printf("\t");
    while(ptr != NULL)
    {
        printf(" %d -> ", ptr -> data);
        ptr = ptr -> next;
    }


}


// main function
int main() {

    struct node *head, *sll;
    sll=(struct node *)malloc(sizeof(struct node));
    sll=NULL;

    int n, ele;

    // reading total no of elements(nodes) in SLL
    printf("Enter the total no of nodes in the linked list: ");
    scanf("%d",&n);

    printf("Enter the elements to be inserted at beginning of SLL:\n");

    // using loop for inserting n elements at the beg of the sll
    for(int i=0; i<n; i++){
        printf("\n");
        scanf("%d",&ele); // read element to add at beginning
        sll= insert_beg(sll,ele);
        display(sll); // printing SLL after addition of each node

    }
    printf("\n");
    printf("\n");
    printf("The entered SLL is:\n");
    display(sll);

    return 0;
}
