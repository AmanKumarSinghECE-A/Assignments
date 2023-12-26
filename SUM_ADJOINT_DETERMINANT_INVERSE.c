#include <stdio.h>

int main(void) {
    int a[3][3], b[3][3], c[3][3], sum[3][3], i, j;
    float I[3][3], determinant;

    printf("Enter elements of 1st matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    //Printing matrices
    printf("First matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Second matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }

    //Printing the result
    printf("Sum of two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d   ", sum[i][j]);
        }
        printf("\n");
    }

    //Adjoint of matrix
    printf("Adjoint of a matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[(j + 1) % 3][(i + 1) % 3] * a[(j + 2) % 3][(i + 2) % 3] -
                      a[(j + 1) % 3][(i + 2) % 3] * a[(j + 2) % 3][(i + 1) % 3];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    //Determinant
    determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) -
                  a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) +
                  a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    printf("Determinant of matrix a: %f\n", determinant);

    //Inverse of matrix
    printf("Inverse of matrix a:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            I[i][j] = c[j][i] / determinant;
            printf("%f ", I[i][j]);
        }
        printf("\n");
    }

    return 0;
}
