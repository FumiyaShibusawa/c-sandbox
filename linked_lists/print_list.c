#include <stdio.h>
#include <stdlib.h>

#include "struct_node_t.h"

void print_list(node_t *head)
{
    printf("====== print list ======\n");
    node_t *current = head;
    while (current != NULL)
    {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n\n");
}