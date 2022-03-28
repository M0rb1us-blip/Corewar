/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** sub
*/

#include "../../include/struct.h"

bool sub(proc_t ***procs, int i)
{
    int sub = 0;

    sub = procs[0][i]->registers[procs[0][i]->instruction->args[0] - 1] -
    procs[0][i]->registers[procs[0][i]->instruction->args[1] - 1];
    procs[0][i]->registers[procs[0][i]->instruction->args[2] - 1] = sub;
    if (sub == 0)
        procs[0][i]->carry = 1;
    else
        procs[0][i]->carry = 0;
    return (true);
}