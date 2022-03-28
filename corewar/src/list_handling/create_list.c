/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** create_list
*/

#include "../../include/struct.h"

list_t *create_list(void)
{
    list_t *list = NULL;
    int size = 0;

    list = malloc(sizeof(list_t));
    if (list == NULL)
        return (NULL);
    list->val = 0;
    list->owner = 0;
    list->next = list;
    list->prev = list;
    add_n_next(list, MEM_SIZE - 1, 0);
    if ((size = get_list_len(list)) != MEM_SIZE) {
        write(1, "Couldn't allocate enough space\n", 32);
        clear_list(list);
        return (NULL);
    }
    return (list);
}