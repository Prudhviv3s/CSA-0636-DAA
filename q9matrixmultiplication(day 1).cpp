#include <stdio.h>
#include <time.h>

#define MAX_SIZE 100

int main() {
    int m, n, p;
    printf("Enter the number of rows and columns for the first matrix (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns for the second matrix (n x p): ");
    scanf("%d", &p);

    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mat1[i][j] = i + j;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            mat2[i][j] = i + j;
        }
    }
    clock_t start_time = clock();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Time taken for matrix multiplication: %f seconds\n", time_taken);
    printf("Time complexity: O(%d * %d * %d) = O(%d)\n", m, n, p, m * n * p);

return 0;
}