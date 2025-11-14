#include <stdio.h>

int main() {
    int A[3][2], i, j;

    printf("Enter the elements of 3x2 matrix:\n");

    // Read the matrix
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
