#include <stdio.h>
#include <string.h>

int romanValue(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int total = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int current = romanValue(s[i]);
        int next = romanValue(s[i + 1]);

        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }

    return total;
}

int main() {

    // Test Case 1
    char s1[] = "III";

    printf("Test Case 1:\n");
    printf("Input: s = \"%s\"\n", s1);
    printf("Output: %d\n\n", romanToInt(s1));


    // Test Case 2
    char s2[] = "LVIII";

    printf("Test Case 2:\n");
    printf("Input: s = \"%s\"\n", s2);
    printf("Output: %d\n\n", romanToInt(s2));


    // Test Case 3
    char s3[] = "MCMXCIV";

    printf("Test Case 3:\n");
    printf("Input: s = \"%s\"\n", s3);
    printf("Output: %d\n", romanToInt(s3));

    return 0;
}