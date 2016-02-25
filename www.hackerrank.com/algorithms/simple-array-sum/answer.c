#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>

int array_sum(int numbers[], int length) {
    int sum = 0;
    int index;

    for (index = 0; index < length; index++) {
        sum += numbers[index];
    }

    return sum;
}

int main(void) {
    int numbers[] = {1, 2, 3, 4, 10, 11};
    printf("%d\n", array_sum(numbers, 6));
    return 0;
}
