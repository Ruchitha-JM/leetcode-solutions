#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    long long left = 1;
    long long right = num;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;

        if (square == num) {
            return true;
        }

        if (square < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {

    // Test Case 1
    int num1 = 16;

    printf("Test Case 1:\n");
    printf("Input: num = %d\n", num1);
    printf("Output: %s\n\n",
           isPerfectSquare(num1) ? "true" : "false");


    // Test Case 2
    int num2 = 14;

    printf("Test Case 2:\n");
    printf("Input: num = %d\n", num2);
    printf("Output: %s\n",
           isPerfectSquare(num2) ? "true" : "false");

    return 0;
}