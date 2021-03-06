/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** aff
*/

#include "../../include/struct.h"

bool aff(proc_t ***procs, int i)
{
    int reg = procs[0][i]->instruction->args[0] - 1;

    if (reg < 0 && reg >= REG_NUMBER)
        return (true);
    my_printf("%c", procs[0][i]->registers[reg] % 256);
    return (true);
}