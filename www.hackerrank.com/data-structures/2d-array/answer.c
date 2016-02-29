#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>
#include <stdlib.h>

int hgs_row_sum(int *hgs, int start_index) {
    return  hgs[start_index] + hgs[start_index + 1] + hgs[start_index + 2];
}

int hourglasses(int *hgs, int n) {
    int length_wise = n - 3;
    int width_wise = n - 3;
    int max_sum = -1;
    int first = 0;

    int row_index;
    for (row_index = 0; row_index <= width_wise; row_index++) {
        int row_start_index = n * row_index;
        int glass_start_index = row_start_index;
        int glass_end_index = row_start_index + length_wise;

        for (; glass_start_index <= glass_end_index; glass_start_index++) {
            int sum1 = hgs_row_sum(hgs, glass_start_index + (n * 0));
            int sum2 = hgs[glass_start_index + (n * 1) + 1];
            int sum3 = hgs_row_sum(hgs, glass_start_index + (n * 2));
            int sum = sum1 + sum2 + sum3;
            if (0 == first) {
                max_sum = sum;
                first = 1;
                continue;
            }
            if (sum > max_sum) max_sum = sum;
        }
    }

    return max_sum;
}


int main(void) {
    int hgs[] = {
        1,  1,  1,  0,  0, 0,
        0,  1,  0,  0,  0, 0,
        1,  1,  1,  0,  0, 0,
        0,  9,  2, -4, -4, 0,
        0,  0,  0, -2,  0, 0,
        0,  0, -1, -2, -4, 0
    };

    printf("%d\n", hourglasses(hgs, 6));

    return 0;
}
