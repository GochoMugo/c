#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>

void sign_analysis(int numbers[], int length, double *results) {
    int index;
    int res[] = {0, 0, 0};

    for (index = 0; index < length; index++) {
        if (0 < numbers[index]) {
            res[0]++;
        } else if (0 > numbers[index]) {
            res[1]++;
        } else {
            res[2]++;
        }
    }

    results[0] = (double) res[0] / length;
    results[1] = (double) res[1] / length;
    results[2] = (double) res[2] / length;
}

int main(void) {
    int numbers[] = {-4, 3, -9, 0, 4, 1};
    double results[3];

    sign_analysis(numbers, 6, results);
    printf("%f\n%f\n%f\n", results[0], results[1], results[2]);

    return 0;
}
