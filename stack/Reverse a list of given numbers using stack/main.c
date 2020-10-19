//  program to reverse a list of given numbers using stack
#include <stdio.h>
#include <conio.h>

int stack[10]; // defining the stack

int top = -1;
int pop();
void push(int);


// main function
int main()
{
    int val, n, i, arr[10];

    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\n Enter the elements of the array : ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0;i<n;i++)
        push(arr[i]);

    for(i=0;i<n;i++)
    {
        val = pop();
        arr[i] = val;
    }

    printf("\n The reversed array is : ");
    for(i=0; i<n; i++)
        printf("\n %d", arr[i]);

    return 0;
}


// push function
void push(int val)
{
    stack[++top] = val;
}


// pop function
int pop()
{
    return(stack[top--]);
}
