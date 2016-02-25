#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>

long long int array_sum(int array[], int length) {
    long long int sum = 0;
    int index;

    for (index = 0; index < length; index++) {
        sum += array[index];
    }

    return sum;
}

int main(void) {
    int array[] = {
        1000000001,
        1000000002,
        1000000003,
        1000000004,
        1000000005
    };
    long long int sum = array_sum(array, 5);
    printf("%lld\n", sum);
    return 0;
}
