/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** lfork
*/

#include "../../include/struct.h"


bool lfork(proc_t ***procs, int i)
{
    proc_t *to_add = create_new_proc((*procs)[i]);
    int offset = ((*procs)[i]->instruction->args[0] - 1 - IND_SIZE);

    if (!to_add)
        return (false);
    if ((*procs)[i]->instruction->args[0] > 0)
        to_add->pc = go_n_next(to_add->pc, offset);
    else
        to_add->pc = go_n_prev(to_add->pc, -offset);
    if (!(*procs = push_proc(*procs, to_add)))
        return (false);
    return (true);
}