#include <stdio.h>
int main() 
{
    int ans, score = 0;
    printf("Simple Quiz\n");
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 2)
    {
        score++;
    }
    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 1)
    {
        score++;
    }
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &ans);
    if (ans == 3)
    {
        score++;
    }
    printf("\nYour Score = %d/3\n", score);
    return 0;
}