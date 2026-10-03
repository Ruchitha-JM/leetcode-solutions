#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }
        else {
            if (top == -1) {
                return false;
            }

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == '}' && open != '{') ||
                (s[i] == ']' && open != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {

    // Test Case 1
    char str1[] = "()";

    printf("Test Case 1:\n");
    printf("Input: %s\n", str1);
    printf("Output: %s\n\n", isValid(str1) ? "true" : "false");


    // Test Case 2
    char str2[] = "()[]{}";

    printf("Test Case 2:\n");
    printf("Input: %s\n", str2);
    printf("Output: %s\n\n", isValid(str2) ? "true" : "false");


    // Test Case 3
    char str3[] = "(]";

    printf("Test Case 3:\n");
    printf("Input: %s\n", str3);
    printf("Output: %s\n\n", isValid(str3) ? "true" : "false");


    return 0;
}