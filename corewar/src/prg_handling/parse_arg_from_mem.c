/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** parse_arg_from_mem
*/

#include "../../include/struct.h"

void parse_arg_from_mem(proc_t *proc)
{
    int size;

    for (int i = 0; proc->instruction->description[i]; i++) {
        if (proc->instruction->description[i] == 3 ||
            (proc->instruction->description[i] == 2 &&
            use_index(proc->instruction->code)))
            size = IND_SIZE;
        else if (proc->instruction->description[i] == 2)
            size = DIR_SIZE;
        else
            size = 1;
        proc->instruction->args[i] = get_arg_from_mem(proc, size);
    }
}