/*#include <stdio.h>

char *remove_zero(char str[], int len, char newstr[]) {
    int j = 0;  // Index for the new string

    for (int i = 0; i < len; i++) {
        // Skip '0' characters
        if (str[i] != '0') {
            newstr[j] = str[i];
            j++;
        }
    }

    // Null-terminate the new string
    newstr[j] = '\0';

    return newstr;
}

int main() {
    char str[10] = "0001234", str1[10];
    printf("%s", remove_zero(str, 7, str1));

    return 0;
} */
/*#include <stdio.h>

int is_binary_pal(int n) {
    int original = n;
    int reverse = 0;

    // Reverse the binary representation of n
    while (n > 0) {
        reverse = (reverse << 1) | (n & 1);
        n = n >> 1;
    }

    // Compare the original and reverse binary numbers
    return (original == reverse) ? 1 : 0;
}

int main() {
    printf("9 is %d\n", is_binary_pal(9));
    printf("8 is %d\n", is_binary_pal(8));

    return 0;
}*/
#include<stdio.h>
int main()
{
   int EOF = EOF ++;
   printf("%d",EOF);
   return 0;
}
