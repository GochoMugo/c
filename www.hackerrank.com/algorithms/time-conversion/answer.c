#!/usr/bin/env crun
/* -Wall -O3 */

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void time_convert(char *time_am_pm, char **time_24) {
    int hours, minutes, seconds;
    char *am_pm;

    am_pm = (char *) malloc(3);
    if (NULL == am_pm) {
        perror(NULL);
        exit(1);
    }

    sscanf(time_am_pm, "%d:%d:%d%s", &hours, &minutes, &seconds, am_pm);

    if (0 == strcmp("PM", am_pm)) {
        if (12 != hours) hours = hours + 12;
    } else {
        if (12 == hours) hours = 0;
    }

    int result = asprintf(time_24, "%02d:%02d:%02d", hours, minutes, seconds);
    if (-1 == result) {
        time_24 = NULL;
    }
}


int main(void) {
    char *time_am_pm = "07:05:45PM";
    char *time_24 = NULL;

    time_convert(time_am_pm, &time_24);
    if (NULL == time_24) {
        fprintf(stderr, "error: could not convert\n");
        exit(1);
    }

    printf("%s\n", time_24);

    return 0;
}
