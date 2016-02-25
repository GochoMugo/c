#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>
#include <stdlib.h>

int matrix_diagonal_difference(int *matrix, int n) {
    int primary_diagonal_sum = 0;
    int secondary_diagonal_sum = 0;
    int index;
    int *row_start;

    for (index = 0; index < n; index++) {
        row_start = matrix + (n * index);
        primary_diagonal_sum += row_start[index];
        secondary_diagonal_sum += row_start[n - index - 1];
    }

    return abs(primary_diagonal_sum - secondary_diagonal_sum);
}

int main(void) {
    int matrix[3][3] = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };
    printf("%d\n", matrix_diagonal_difference(&matrix[0][0], 3));
    return 0;
}
