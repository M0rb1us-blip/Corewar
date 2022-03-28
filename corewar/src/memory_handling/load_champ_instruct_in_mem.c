/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** load_champ_instruct_in_mem
*/

#include "../../include/struct.h"

bool load_champ_instruct_in_mem(champion_t **champ, list_t *mem)
{
    int count = 0;
    int off = 0;

    for (int i = 0; i < MEM_SIZE; i++) {
        mem->owner = 0;
        mem->val = 0;
        mem = mem->next;
    }
    for (; champ[count]; count++);
    off = MEM_SIZE / count;
    for (int i = 0; champ[i]; i++)
        if (champ[i]->start_offset == -1)
            champ[i]->start_offset = i * off;
    for (int i = 0; champ[i]; i++) {
        if (check_overlap(mem, champ[i]->start_offset,
            champ[i]->header->prog_size))
            return (false);
        load_in_mem(mem, champ[i]->instructions,
        champ[i]->header->prog_size, champ[i]);
    }
    return (true);
}