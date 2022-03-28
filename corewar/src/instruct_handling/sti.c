/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** sti
*/

#include "../../include/struct.h"

bool sti(proc_t ***procs, int i)
{
    int value = get_value_from_instruct(procs[0][i], 0);
    int first = get_value_from_instruct(procs[0][i], 1);
    int second = get_value_from_instruct(procs[0][i], 2);
    int offset = 0;

    if ((*procs)[i]->instruction->description[1] == 3) {
        first = first % IDX_MOD - (*procs)[i]->instruction->size;
        first = get_nb_from_mem((*procs)[i]->pc, IND_SIZE, first);
    }
    offset = (first + second) % IDX_MOD - (*procs)[i]->instruction->size;
    store_at_index((*procs)[i]->pc, value, offset, \
    (*procs)[i]->champion->prog_number);
    return (true);
}