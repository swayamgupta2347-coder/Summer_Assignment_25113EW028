 #include<stdio.h>
 int main()
{
    int arr[100],i,j,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter element of arrayy");
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("Number %d has duplicate values \n",arr[i]);
            }
        }
    }
    return 0;
}