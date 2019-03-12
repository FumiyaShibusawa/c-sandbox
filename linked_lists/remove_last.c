#include <stdio.h>
#include <stdlib.h>

#include "struct_node_t.h"

int remove_last(node_t *head)
{
    int value_to_be_deleted = -1;
    if (head->next == NULL)
    {
        value_to_be_deleted = head->val;
        head->next = NULL;
        free(head);
        printf("deleted value: %d\n\n", value_to_be_deleted);
        return value_to_be_deleted;
    }

    node_t *current = head;
    while (current->next->next != NULL)
        current = current->next;

    value_to_be_deleted = current->next->val;
    current->next = NULL;

    printf("deleted value: %d\n\n", value_to_be_deleted);

    return value_to_be_deleted;
}