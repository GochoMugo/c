#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void staircase(int height) {
    char *line = NULL;

    line = (char *) malloc(height + 1);
    if (NULL == line) {
        perror(NULL);
        exit(1);
    }

    memset(line, ' ', height);
    line[height + 1] = '\0';

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
