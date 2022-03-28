/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** show_list
*/

#include "nomdestruct.h"

void list_show(list_t *list)
{
    node_t *head = *list;

    while ((*list) != NULL) {
        my_printf("%s, %d %s, byte = %d, cb = %d\n", (*list)->arg.inst, \
        (*list)->arg.pos, (*list)->arg.type, (*list)->arg.bytes, \
        (*list)->arg.coding_byte);
        *list = (*list)->next;
    }
    *list = head;
}