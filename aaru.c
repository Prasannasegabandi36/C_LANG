Write a function to count the number of bits that must be flipped to  convert an integer a to another integer b. The function prototype is

 int bits2flip(int a, int b);

The function takes two integers as arguments and returns the number  of bits that need to be flipped. You can follow the following steps.

  Compute the XOR of a and b and store it in another variable, say c.

 Count the number of 1’s in c. This can be done by using the bitwise AND, and the right shift operator.

 For example, if we call the function from main() as  bits2flip(10, 7)  it should return 3.Question 12
Consider the following C statements and structure declaration.

  /*#include<stdio.h>

#include<stdlib.h>

#define PI 3.14

 struct circle {

        int radius;

        int perimeter;

        float area;

};

You are required to write a function with the following prototype.

 struct circle * compute(struct circle *cir, int rad);

The function takes two arguments cir and rad,  a pointer to the structure circle and radius of the circle, respectively.

The function allocates memory to the structure.

 The function assigns the value rad to the structure member radius

The function computes the perimeter and area and stores them in the  corresponding members of the structure. Use the symbolic constant (PI)  defined above to compute the area.

The function finally returns the structure

 For example, if we call the function from main as follows.

 struct circle *cir = compute(cir, 2);

 printf("Radius %d\n", cir->radius);

 printf("Perimeter %d\n", cir->perimeter);

 printf("Area %f\n", cir->area);

 It should print, the following

 Radius 2

 Perimeter 12

12.560000 */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

struct circle {
    int radius;
    int perimeter;
    float area;
};

struct circle *compute(struct circle *cir, int rad) {
    // Allocate memory for the structure
    cir = (struct circle *)malloc(sizeof(struct circle));

    // Assign the value rad to the structure member radius
    cir->radius = rad;

    // Compute perimeter and area
    cir->perimeter = 2 * PI * cir->radius;
    cir->area = PI * cir->radius * cir->radius;

    // Return the structure
    return cir;
}

int main() {
    struct circle *cir = NULL;

    // Call the compute function
    cir = compute(cir, 2);

    // Print the results
    printf("Radius %d\n", cir->radius);
    printf("Perimeter %d\n", cir->perimeter);
    printf("Area %f\n", cir->area);

    // Free the allocated memory
    free(cir);

    return 0;
}


#include <stdio.h>

int bits2flip(int a, int b) {
    // Compute the XOR of a and b
    int c = a ^ b;

    // Count the number of set bits in c
    int count = 0;
    while (c) {
        // Increment count for each set bit
        count += c & 1;
        // Right shift c to check the next bit
        c >>= 1;
    }

    return count;
}

int main() {
    // Example usage
    int a = 10;
    int b = 7;
    int result = bits2flip(a, b);

    printf("Number of bits to flip from %d to %d: %d\n", a, b, result);

    return 0;
}

#include <stdio.h>

int bits2flip(int a, int b) {
    // Compute the XOR of a and b
    int c = a ^ b;

    // Count the number of set bits in c
    int count = 0;
    while (c) {
        // Increment count for each set bit
        count += c & 1;
        // Right shift c to check the next bit
        c >>= 1;
    }

    return count;
}

int main() {
    // Example usage
    int a = 10;
    int b = 7;
    int result = bits2flip(a, b);

    printf("Number of bits to flip from %d to %d: %d\n", a, b, result);

    return 0;
}


