#include <stdio.h>
int main()
{
int array[100], key, i, n , count = 0;
printf("Enter number of elements in array\n");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++)
{
scanf("%d", &array[i]);
}
printf("Enter a number to search\n");
scanf("%d", &key);
for (i = 0; i < n; i++)
{
  if (array[i] == key) 
  {
         count++;
  }
}
printf("Number of occurrences: %d", count);
}
