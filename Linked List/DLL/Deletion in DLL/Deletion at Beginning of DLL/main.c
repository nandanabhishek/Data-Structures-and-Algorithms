
// defining the structure of a node in DLL
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};


// function to delete element from the beginning of DLL.
struct node *delete_beg(struct node *head)
{
    struct node *ptr;
    ptr = head;

    if(head == NULL) {
        printf("SLL is empty!(UNDERFLOW)");
        return head;
    }
    else if(ptr->next == NULL) {
        ptr=NULL;
        head=ptr;
        free(ptr);
        return head;     
    }
    else {
        ptr = ptr -> next;
        ptr -> prev = NULL;
        head=ptr;
        free(ptr);
        return head;
    }

}
