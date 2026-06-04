#include <stdio.h>

int main() {
    int num, i;
    float factorial =1 ;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %.2f\n", num, factorial);

    }

    return 0;
}