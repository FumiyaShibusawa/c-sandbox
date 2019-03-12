#include <stdio.h>
#include <stdlib.h>

#include "assign_list.h"

void push(node_t *head, int val)
{
    node_t *current = head;
    while (current != NULL)
        current = current->next;

    current = malloc(sizeof(node_t));
    current->val = val;
    current->next = NULL;
}