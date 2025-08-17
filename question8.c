#include <stdio.h>

void sum(int n, int a[n][n], int b[n][n], int sum[n][n]) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }
}

void difference(int n, int a[n][n], int b[n][n], int diff[n][n]) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nDifference of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d", diff[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, i, j;
    printf("\nProgram to Perform the addition of two matrix and Subtraction of one matrix from another");
    printf("\nEnter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n], b[n][n], sum_result[n][n], diff_result[n][n];

    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    sum(n, a, b, sum_result);
    difference(n, a, b, diff_result);

    return 0;
}

