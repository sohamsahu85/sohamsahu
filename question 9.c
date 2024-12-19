#include <stdio.h>

int main() {
    int matrix[4][4];
    int sum = 0, firstDiagonalSum = 0, secondDiagonalSum = 0;


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            if (i == j) {
                firstDiagonalSum += matrix[i][j];
            }
            if (i + j == 3) {
                secondDiagonalSum += matrix[i][j];
            }
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements: %d\n", sum);
    printf("Sum of primary diagonal: %d\n", firstDiagonalSum);
    printf("Sum of secondary diagonal: %d\n", secondDiagonalSum);

    return 0;
}
