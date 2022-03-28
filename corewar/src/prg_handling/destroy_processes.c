/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** destroy_processes
*/

#include "../../include/struct.h"

void destroy_processes(proc_t **procs)
{
    for (int i = 0; procs[i]; i++) {
        destroy_instruction(procs[i]->instruction);
        if (procs[i]->registers)
            free(procs[i]->registers);
        free(procs[i]);
    }
    free(procs);
}