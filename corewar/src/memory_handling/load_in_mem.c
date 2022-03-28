/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** load_in_mem
*/

#include "../../include/struct.h"

void load_in_mem(list_t *mem, char *to_write, int size, champion_t *champion)
{
    for (int i = 0; i < champion->start_offset; i++)
        mem = mem->next;
    for (int i = 0; i < size; i++) {
        mem->val = to_write[i];
        mem->owner = champion->prog_number;
        mem = mem->next;
    }
}