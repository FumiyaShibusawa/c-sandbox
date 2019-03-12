#include <stdio.h>
#include <stdlib.h>

#include "struct_node_t.h"
#include "pop.h"

int remove_by_index(node_t **head, int index)
{
    if (index == 0)
        return pop(head);

    int value_to_be_deleted = -1;
    node_t *current = *head;
    node_t *temp_node = NULL;

    for (size_t i = 0; i < index - 1; i++)
    {
        if (current->next->next == NULL)
        {
            printf("value not found.\n\n");
            return -1;
        }
        else
            current = current->next;
    }

    temp_node = current->next;
    value_to_be_deleted = temp_node->val;
    current->next = temp_node->next;
    temp_node = NULL;
    free(temp_node);

    printf("deleted value: %d\n\n", value_to_be_deleted);

    return value_to_be_deleted;
}