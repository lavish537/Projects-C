#include <stdio.h>

int main() {
    int i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &i, &j);

    int matrix1[i][j], matrix2[i][j], sum[i][j];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < i; i++) {
        for (int j = 0; j < j; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < i; i++) {
        for (int j = 0; j < j; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < i; i++) {
        for (int j = 0; j < j; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices is:\n");
    for (int i = 0; i < i; i++) {
        for (int j = 0; j < j; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
