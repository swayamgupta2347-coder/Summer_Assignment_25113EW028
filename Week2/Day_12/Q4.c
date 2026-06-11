#include <stdio.h>
#include <stdbool.h> 
 int isPerfect(int num) {
    if (num <= 0)
     return 0;
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
     {
        if (num % i == 0)
         {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPerfect(number))
     {
        printf("%d is a perfect number.", number);
    } 
    else 
    {
        printf("%d is not a perfect number.", number);
    }

    return 0;
}