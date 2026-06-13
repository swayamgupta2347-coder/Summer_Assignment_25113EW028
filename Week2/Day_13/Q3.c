#include <stdio.h>

int main()
 {
    int n, i, min, max;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
    printf("enter array element");
     scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for(i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }

    printf("Largest: %dSmallest: %d", max, min);
    return 0;
}