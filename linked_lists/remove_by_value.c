#include <stdio.h>
#include <stdlib.h>

#include "struct_node_t.h"
#include "pop.h"

int remove_by_value(node_t **head, int val)
{
    int value_to_be_deleted = -1;

    // 最初の要素が一致する場合
    if ((*head)->val == val)
    {
        return pop(head);
    }
    else
    {
        // 要素が 1 個しかないかつそれが一致しない場合
        if ((*head)->next == NULL)
        {
            printf("value not found.\n\n");
            return value_to_be_deleted;
        }
    }

    // 2 個以上の要素が存在するかつ最初の要素が一致しない場合
    node_t *current = *head;
    node_t *temp_node = NULL;
    while (current->next->val != val)
    {
        // 末尾から 2 個手前まで current が進んだかつ値が見つからなかった場合
        if (current->next->next == NULL)
        {
            printf("value not found.\n\n");
            return value_to_be_deleted;
        }
        current = current->next;
    }

    // 削除したい値が見つかった場合
    temp_node = current->next;
    value_to_be_deleted = temp_node->val;
    current->next = temp_node->next;
    temp_node = NULL;
    free(temp_node);

    printf("deleted value: %d\n\n", value_to_be_deleted);
    return value_to_be_deleted;
}
