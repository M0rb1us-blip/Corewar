/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** destroy_list
*/

#include "../../include/struct.h"

void delete_in_list(list_t *list)
{
    list->prev->next = list->next;
    list->next->prev = list->prev;
    free(list);
}

void clear_list(list_t *list)
{
    list_t *next = NULL;
    list_t *tmp = NULL;

    for (tmp = list->next; tmp != list; tmp = next) {
        next = tmp->next;
        free(tmp);
    }
    free(list);
}