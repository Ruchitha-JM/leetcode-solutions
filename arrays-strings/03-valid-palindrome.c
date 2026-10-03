#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        while (left < right && !isalnum(str[left])) {
            left++;
        }

        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1;
}

int main() {

    // Test Case 1
    char str1[] = "A man, a plan, a canal: Panama";

    printf("Test Case 1:\n");
    printf("Input: %s\n", str1);

    if (isPalindrome(str1)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }


    // Test Case 2
    char str2[] = "race a car";

    printf("\nTest Case 2:\n");
    printf("Input: %s\n", str2);

    if (isPalindrome(str2)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }


    // Test Case 3
    char str3[] = " ";

    printf("\nTest Case 3:\n");
    printf("Input: %s\n", str3);

    if (isPalindrome(str3)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}