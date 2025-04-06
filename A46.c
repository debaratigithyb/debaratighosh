#include <stdio.h>

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transposed[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input: Matrix size
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transposed[cols][rows];

    // Input: Matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose
    transposeMatrix(rows, cols, matrix, transposed);

    // Output: Original and Transposed Matrix
    printf("Original Matrix:\n");
    printMatrix(rows, cols, matrix);

    printf("Transposed Matrix:\n");
    printMatrix(cols, rows, transposed);

    return 0;
}