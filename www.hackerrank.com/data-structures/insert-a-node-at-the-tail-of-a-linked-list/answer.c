#!/usr/bin/env crun
/* -Wall -O3 */

#include <stdio.h>
#include <stdlib.h>
#include "../lib/node.h"

Node* Insert(Node *head, int data) {
    Node *target = head;
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (NULL == head) {
        return new_node;
    }

    while (NULL != target->next) {
        target = target->next;
    }

    target->next = new_node;
    return head;
}

int main(void) {
    Node node1 = { 1 };
    Node node2 = { 2 };

    node1.next = &node2;

    Insert(&node1, 3);

    return 0;
}
