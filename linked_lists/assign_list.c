#include <stdio.h>
#include <stdlib.h>

#include "struct_node_t.h"

node_t *assign_list(int argc, int array[])
{
    node_t *head = malloc(sizeof(node_t));
    node_t *current = head;
    for (size_t i = 0; i < argc; i++)
    {
        if (i + 1 == argc)
        {
            current->val = array[i];
            current->next = NULL;
            break;
        }
        current->val = array[i];
        current->next = malloc(sizeof(node_t));
        current = current->next;
    }
    return head;
}
