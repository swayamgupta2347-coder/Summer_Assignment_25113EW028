#include <stdio.h>

int main() {
    int rows = 5, i, j, k;

    for (i = 1; i <= rows; i++) {
       
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

         
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        } 
        for (k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}