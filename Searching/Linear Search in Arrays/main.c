// program to search an element in an array
// using the linear search technique.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define size 20  // Added so the size of the array can be altered more easily

int main()
{
    int arr[size], num, i, n, found = 0, pos = -1;

    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Entered array is : ");
    for(i=0; i<n; i++)
        printf(" %d ",arr[i]);

    printf("\n\n Enter the number that has to be searched : ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            found = 1;
            pos=i;
            printf("\n %d is found in the array at position = %d", num, i+1);

/* +1 added in line 23 so that it would display the number in
 the first place in the array as in position 1 instead of 0 */

            break;

        }
    }

    if (found == 0)
        printf("\n %d does not exist in the array!", num);
    return 0;

}
