/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** check_overlap
*/

#include "../../include/struct.h"

bool check_overlap(list_t *mem, int offset, int size)
{
    for (int i = 0; i < offset; i++)
        mem = mem->next;
    for (int i = 0; i < size; i++) {
        if (mem->val)
            return (true);
        mem = mem->next;
    }
    return (false);
}