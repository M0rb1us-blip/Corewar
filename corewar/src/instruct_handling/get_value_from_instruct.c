/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** get_value_from_instruct
*/

#include "../../include/struct.h"

int get_value_from_instruct(proc_t *proc, int arg)
{
    if (proc->instruction->description[arg] == 1)
        return (proc->registers[proc->instruction->args[arg] - 1]);
    return (proc->instruction->args[arg]);
}