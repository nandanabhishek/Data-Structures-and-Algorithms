#include <stdio.h>
#include <stdlib.h>

// defining structure of a node
struct node{
    int data;
    struct node *next;
};

//function to print element of linked list
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


//function to insert element at the end of linked list
struct node *insert_end(struct node *head, int ele)
{
    struct node *new_node, *ptr;

    new_node=(struct node *)malloc(sizeof(struct node));

    new_node->data= ele;
    new_node->next= NULL;

    ptr=head;

    if(ptr == NULL){
        ptr=new_node;
        head=ptr;
    }
    else {

        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }

    return head;

}


//inserting element at the specified position (pos starts from 1)
struct node *insert_pos(struct node *head, int element, int position)
{
    struct node *newNode, *ptr;
    newNode = (struct node *)malloc(sizeof(struct node));

    ptr = head;

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }
    else {
        newNode->data = element; // Link data part

        // Traverse to the n-1 position

        for (int i = 2; i <= position -1; i++) {
            ptr = ptr->next;
            if (ptr == NULL)
                break;
        }

        if (ptr != NULL) {
            /* Link address part of new node */
            newNode->next = ptr->next;

            /* Link address part of n-1 node */
            ptr->next = newNode;

        }
    }

    return head;

}


// main function
int main()
{
    int n, ele, pos, new_ele;
    struct node *sll;
    sll=(struct node *)malloc(sizeof(struct node));
    sll=NULL;

    printf("Enter the total no of nodes(elements) in the SLL: ");
    scanf("%d",&n);


    printf("\nEnter the elements to be inserted in the SLL:\n");
    // create a SLL by inserting elements at the end
    for(int i=0; i<n; i++){
        printf("\n");
        scanf("%d",&ele);
        sll=insert_end(sll,ele);
        display(sll);
        printf("\n");
    }

    printf("\nThe created SLL is:\n");
    display(sll);

    printf("\n\nEnter the element to be inserted in the above creatrd SLL: ");
    scanf("%d",&new_ele);
    printf("\nEnter the position at which you want to insert %d in SLL:",new_ele);
    scanf("%d",&pos);
    sll=insert_pos(sll, new_ele, pos);

    printf("\nThe final SLL is:\n");
    display(sll);


}