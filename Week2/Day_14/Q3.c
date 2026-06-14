#include <stdio.h>
int main() 
{
    int arr[100] ,i , greatest ,second , n ;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter values of array:");
        scanf("%d", &arr[i]);
    }
    greatest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (greatest < arr[i])
        {
            greatest = arr[i];
        }
    }

    second = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < greatest && second < arr[i])
        {
            second = arr[i];
        }
    }

    printf("The greatest number is : %d", greatest);
    printf("\nThe second greatest number is: %d", second);

    return 0;
}