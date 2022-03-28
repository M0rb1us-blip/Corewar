/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** get_arg_from_mem
*/

#include "../../include/struct.h"

int get_arg_from_mem(proc_t *proc, int size)
{
    int argument = 0;

    for (int i = 0; i < size; i++) {
        argument <<= 8;
        argument |= (proc->pc->val);
        proc->pc = proc->pc->next;
    }
    proc->instruction->size += size;
    return (argument);
}