#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void staircase(int height) {
    char *line = (char *) malloc(height);

    if (NULL == line) {
        perror(NULL);
        exit(1);
    }

    memset(line, ' ', height);

    while (0 <= --height) {
        line[height] = '#';
        printf("%s\n", line);
    }
}

int main(void) {
    int height = 6;
    staircase(height);
    return 0;
}
