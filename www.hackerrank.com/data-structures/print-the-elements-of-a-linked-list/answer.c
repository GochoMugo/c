#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>
#include "../lib/node.h"

void Print(Node *head) {
    if (NULL == head) return;
    printf("%d\n", head->data);
    return Print(head->next);
}

int main(void) {
    Node node1 = { 1 };
    Node node2 = { 2 };
    Node node3 = { 3 };

    node1.next = &node2;
    node2.next = &node3;

    Print(&node1);
    return 0;
}
