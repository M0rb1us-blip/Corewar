/*
** EPITECH PROJECT, 2020
** B-PSU-100-NCY-1-1-myls-vincent.thomas
** File description:
** del_list
*/
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void del_list(list_t *list)
{
    node_t *tmp;
    while (*list != NULL) {
        tmp = *list;
        *list = (*list)->next;
        free(tmp->arg.inst);
        free(tmp->arg.type);
        free(tmp);
    }
}