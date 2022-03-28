/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** fill_process
*/

#include "../../include/struct.h"

proc_t **fill_process(proc_t **procs, list_t *memory, \
champion_t **champions, int i)
{
    procs[i]->pc = go_n_next(memory, champions[i]->start_offset);
    procs[i]->instruction = malloc(sizeof(instruction_t));
    if (!procs[i]->instruction)
        return (NULL);
    *procs[i]->instruction = (instruction_t){0};
    if (!(procs[i]->instruction->args = malloc(sizeof(int) * 4)))
        return (NULL);
    procs[i]->champion = champions[i];
    procs[i]->registers = malloc(sizeof(int) * REG_NUMBER);
    if (procs[i]->registers == NULL)
        return (NULL);
    for (int j = 0; j < REG_NUMBER; j++)
        procs[i]->registers[j] = 0;
    procs[i]->registers[0] = champions[i]->prog_number;
    procs[i]->is_active = true;
    return (procs);
}