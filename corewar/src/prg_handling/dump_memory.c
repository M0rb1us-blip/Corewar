/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** dump_memory
*/

#include "../../include/struct.h"

void dump_memory(list_t *mem)
{
    char nb[3] = {0};
    char line[6] = {0};

    for (int i = 0; i < MEM_SIZE; i++) {
        int_to_hexa(mem->val, nb, 2, false);
        if (!(i % 32)) {
            int_to_hexa(i, line, 5, true);
            my_printf("%s : ", line);
        }
        my_printf("%s%c", nb, (i % 32) != 31 ? ' ' : '\n');
        mem = mem->next;
    }
}