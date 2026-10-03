#include <stdio.h>
#include <string.h>

void reverseString(char s[]) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

void printString(char s[]) {
    printf("[");
    for (int i = 0; s[i] != '\0'; i++) {
        printf("\"%c\"", s[i]);

        if (s[i + 1] != '\0') {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {

    // Test Case 1: Typical case
    char str1[] = "hello";

    printf("Test Case 1:\n");
    printf("Before: ");
    printString(str1);

    reverseString(str1);

    printf("After:  ");
    printString(str1);


    // Test Case 2: Edge case - single character
    char str2[] = "a";

    printf("\nTest Case 2:\n");
    printf("Before: ");
    printString(str2);

    reverseString(str2);

    printf("After:  ");
    printString(str2);

    return 0;
}