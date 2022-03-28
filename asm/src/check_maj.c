/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino
** File description:
** check_maj
*/

#include "nomdestruct.h"

int check_maj_sub(char *inst)
{
    int e = 0;

    for (int i = 0; inst[i] != '\0'; i++)
        if (inst[i] >= 65 && inst[i] <= 90)
            e += 1;
    return (e);
}

int check_maj(list_t *list)
{
    node_t *head = *list;
    int i = 0;

    while (*list != NULL) {
        i += check_maj_sub((*list)->arg.inst);
        (*list) = (*list)->next;
    }
    *list = head;
    if (i == 0)
        return (0);
    else
        return (1);
}