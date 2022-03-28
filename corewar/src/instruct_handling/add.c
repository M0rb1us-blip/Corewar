/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** add
*/

#include "../../include/struct.h"

bool add(proc_t ***procs, int i)
{
    int add = 0;

    add = procs[0][i]->registers[procs[0][i]->instruction->args[0] - 1] +
    procs[0][i]->registers[procs[0][i]->instruction->args[1] - 1];
    procs[0][i]->registers[procs[0][i]->instruction->args[2] - 1] = add;
    if (add == 0)
        procs[0][i]->carry = 1;
    else
        procs[0][i]->carry = 0;
    return (true);
}