#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;

    // Input size of matrices
    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check compatibility
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of A must be equal to rows of B.\n");
        return 0;
    }

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplying matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
