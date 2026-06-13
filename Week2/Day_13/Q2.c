#include <stdio.h>

int main() {
    int n, i,sum =0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i< n ;i++)
    {
        sum=sum+arr[i];
    }
    printf("Array elements are: ");
    for(i = 0; i < n; i++)
     {
        printf("%d ",  sum);
        printf("Average is : %d",sum/n);
     }
    return 0;
}