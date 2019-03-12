#include <stdio.h>
#include <stdlib.h>

#include "struct_node_t.h"

int pop(node_t **head)
{
    if (*head == NULL)
    {
        printf("nil\n\n");
        return -1;
    }

    int value_to_be_deleted = -1;
    if ((*head)->next == NULL)
    {
        value_to_be_deleted = (*head)->val;
        *head = NULL;
        free(*head);
        printf("deleted value: %d\n\n", value_to_be_deleted);
        return -1;
    }

    node_t *next_node = NULL;
    next_node = (*head)->next;
    value_to_be_deleted = (*head)->val;
    free(*head);
    *head = next_node;

    printf("deleted value: %d\n\n", value_to_be_deleted);

    return value_to_be_deleted;
}