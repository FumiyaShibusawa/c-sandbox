#include <stdio.h>
#include <stdlib.h>

#include "assign_list.h"
#include "print_list.h"
#include "push.h"
#include "pop.h"
#include "remove_last.h"
#include "remove_by_index.h"
#include "remove_by_value.h"

int main()
{
    int array[] = {4, 5, 6, 2, 7, 5};
    int length = sizeof(array) / sizeof(int);
    node_t **head = malloc(sizeof(node_t *));
    *head = assign_list(length, array);
    print_list(*head);

    pop(head);
    print_list(*head);

    remove_last(*head);
    print_list(*head);

    remove_by_index(head, 1);
    print_list(*head);

    remove_by_value(head, 5);
    print_list(*head);

    if (head != NULL)
        free(head);

    return 0;
}
