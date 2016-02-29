#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>


void reverse_array(int array[], int length, int reversed[]) {
    int index;

    for (index = 0; index < length; index++) {
        reversed[index] = array[length - index - 1];
    }
}

int main(void) {
    int length = 4;
    int array[] = { 1, 2, 3, 4 };
    int reversed[length];
    int index;

    reverse_array(array, length, reversed);
    for (index = 0; index < length; index++) {
        char next = (length - 1)  == index ? '\n' : ' ';
        printf("%d%c", reversed[index], next);
    }

    return 0;
}
