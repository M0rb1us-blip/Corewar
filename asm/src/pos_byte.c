/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** pos_byte
*/
#include "nomdestruct.h"

void pos_byte(list_t *list)
{
    node_t *head = *list;
    int tmp = 0;
    int pos = 0;

    while (*list != NULL) {
        tmp = (*list)->arg.bytes;
        (*list)->arg.pos = pos;
        *list = (*list)->next;
        pos += tmp;
    }
    *list = head;
}