#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int IsAnagram(char *str1, char *str2) {
    // Check if the lengths of both strings are equal
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams if lengths are different
    }

    // Initialize an array to store the count of each character
    int charCount[256] = {0};

    // Count the occurrences of each character in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        charCount[(int)str1[i]]++;
    }

    // Subtract the occurrences of each character in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        charCount[(int)str2[i]]--;
    }

    // Check if the character counts are all zero
    for (int i = 0; i < 256; i++) {
        if (charCount[i] != 0) {
            return 0; // Not anagrams if any character count is non-zero
        }
    }

    return 1; // Strings are anagrams
}

int main() {
    // Example usage
    char str1[] = "listen";
    char str2[] = "silent";

    if (IsAnagram(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    } else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}
