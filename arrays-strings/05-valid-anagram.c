#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    // Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1:\n");
    printf("Input: s = \"%s\", t = \"%s\"\n", s1, t1);
    printf("Output: %s\n\n", isAnagram(s1, t1) ? "true" : "false");


    // Test Case 2
    char s2[] = "rat";
    char t2[] = "car";

    printf("Test Case 2:\n");
    printf("Input: s = \"%s\", t = \"%s\"\n", s2, t2);
    printf("Output: %s\n", isAnagram(s2, t2) ? "true" : "false");

    return 0;
}