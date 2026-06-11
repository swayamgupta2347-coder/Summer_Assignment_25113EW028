#include <stdio.h>

int isPalindrome(int n) 
{
    int reversed = 0, remainder, original = n;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return (original == reversed);
}

int main() {
    int num = 121;
    if (isPalindrome(num)) printf("%d is a Palindrome", num);
    else printf("%d is not a Palindrome", num);
    return 0;
}