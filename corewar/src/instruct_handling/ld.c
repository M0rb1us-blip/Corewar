/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** ld
*/

#include "../../include/struct.h"

bool xor(proc_t ***procs, int i)
{
    return (true);
}

bool or(proc_t ***procs, int i)
{
    return (true);
}

bool and(proc_t ***procs, int i)
{
    return (true);
}

bool ld(proc_t ***procs, int i)
{
    int to_store = get_value_from_instruct(procs[0][i], 0);
    int reg = procs[0][i]->instruction->args[1] - 1;

    if ((*procs)[i]->instruction->description[0] == 3) {
        to_store = to_store % IDX_MOD - (*procs)[i]->instruction->size;
        to_store = get_nb_from_mem(procs[0][i]->pc, REG_SIZE, to_store);
    }
    procs[0][i]->registers[reg] = to_store;
    if (!to_store) {
        (*procs)[i]->carry = 1;
    } else
        (*procs)[i]->carry = 0;
    return (true);
}