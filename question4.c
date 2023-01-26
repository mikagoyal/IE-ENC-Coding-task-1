//question 4: min and max of array
#include <stdio.h>
int main()
{
    int arr[100], largest, smallest;
    int i, n;

    printf("enter number of elements in array: ");
    scanf("%d", &n);
    printf("enter elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];

    for(i=0; i<n; i++)
    {
        if(largest < arr[i])
        {
            largest = arr[i];
        }
    }
    printf("largest element is: %d \n", largest);

    for(i=0; i<n; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    printf("smallest element is: %d \n", smallest);
}