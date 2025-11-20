#include <stdio.h>

void addMatrices(int a[2][2], int b[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] = a[i][j] + b[i][j];
}

void printMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int a[2][2], b[2][2], result[2][2];

    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    addMatrices(a, b, result);

    printf("Sum of the two matrices:\n");
    printMatrix(result);
    printf("maryadit 125113052\n");

    return 0;
}