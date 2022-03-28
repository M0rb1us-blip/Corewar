/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** get_list_len
*/

#include "../../include/struct.h"

int get_list_len(list_t *list)
{
    list_t *head = list;
    int len = 1;

    while (list->next != head) {
        len++;
        list = list->next;
    }
    return (len);
}