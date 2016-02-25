#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int integer = 7;
    char character = 'e';
    float float_num = 3.12;
    double double_num = 12.32;

    printf("integer:   %d\n", integer);
    printf("character: %c\n", character);
    printf("float:     %f\n", float_num);
    printf("double:    %f\n", double_num);

    return 0;
}
