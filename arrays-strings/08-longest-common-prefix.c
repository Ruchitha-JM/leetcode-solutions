#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    static char result[201];
    
    if (strsSize == 0) {
        result[0] = '\0';
        return result;
    }

    int index = 0;

    while (strs[0][index] != '\0') {
        char current = strs[0][index];

        for (int i = 1; i < strsSize; i++) {
            if (strs[i][index] != current) {
                result[index] = '\0';
                return result;
            }
        }

        result[index] = current;
        index++;
    }

    result[index] = '\0';
    return result;
}

int main() {
    char* test1[] = {"flower", "flow", "flight"};
    int size1 = 3;

    printf("Test Case 1:\n");
    printf("Input: [flower, flow, flight]\n");
    printf("Output: %s\n\n", longestCommonPrefix(test1, size1));

    char* test2[] = {"dog", "racecar", "car"};
    int size2 = 3;

    printf("Test Case 2:\n");
    printf("Input: [dog, racecar, car]\n");
    printf("Output: %s\n", longestCommonPrefix(test2, size2));

    return 0;
}