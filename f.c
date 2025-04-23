// bits2flip.c

#include <stdio.h>

int bits2flip(int a, int b) {
    // Step 1: Compute the XOR of a and b
    int c = a ^ b;

    // Step 2: Count the number of 1's in c
    int count = 0;
    while (c) {
        count += c & 1; // Check the least significant bit
        c >>= 1;       // Right shift c to consider the next bit
    }

    return count;
}

int main() {
    int result = bits2flip(10, 7);
    printf("Number of bits to flip: %d\n", result);

    return 0;
}

