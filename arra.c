#include <stdio.h>

int main()
{
    int A[2][3] = {{1, 2, 3}, {3, 4, 5}};
    int B[][3] = {{1, 2, 3}, {3, 4, 5}};

    printf("%d, %d", ++A[0][0],B[0][0]++);

    return 0;
}
