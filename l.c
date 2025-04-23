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




