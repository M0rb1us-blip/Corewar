/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** fork_for_vm
*/

#include "../../include/struct.h"

proc_t **push_proc(proc_t **arr, proc_t *add)
{
    proc_t **new_arr = NULL;
    int nb_elem_arr;
    int copy_elems;

    for (nb_elem_arr = 0; arr[nb_elem_arr] != NULL; nb_elem_arr++);
    new_arr = malloc(sizeof(proc_t *) * (nb_elem_arr + 2));
    if (new_arr == NULL)
        return (NULL);
    for (copy_elems = 0; copy_elems < nb_elem_arr; copy_elems++)
        new_arr[copy_elems] = arr[copy_elems];
    new_arr[copy_elems] = add;
    new_arr[copy_elems + 1] = NULL;
    free(arr);
    return (new_arr);
}

proc_t *create_new_proc(proc_t *proc)
{
    proc_t *new_proc = malloc(sizeof(proc_t));

    if (!new_proc)
        return (NULL);
    *new_proc = (proc_t){0};
    new_proc->champion = proc->champion;
    new_proc->carry = proc->carry;
    new_proc->is_active = true;
    new_proc->instruction = malloc(sizeof(instruction_t));
    new_proc->registers = malloc(sizeof(int) * REG_NUMBER);
    if (!new_proc->registers || !new_proc->instruction)
        return (false);
    for (int i = 0; i < REG_NUMBER; i++)
        new_proc->registers[i] = proc->registers[i];
    *new_proc->instruction = (instruction_t){0};
    new_proc->instruction->args = malloc(sizeof(int) * 4);
    if (!new_proc->instruction->args)
        return (NULL);
    new_proc->pc = proc->pc;
    return (new_proc);
}

bool fork_vm(proc_t ***procs, int i)
{
    proc_t *to_add = create_new_proc((*procs)[i]);
    int offset = ((*procs)[i]->instruction->args[0] % IDX_MOD) - 1 - IND_SIZE;

    if (!to_add)
        return (false);
    if (offset > 0)
        to_add->pc = go_n_next(to_add->pc, offset);
    else
        to_add->pc = go_n_prev(to_add->pc, -offset);
    if (!(*procs = push_proc(*procs, to_add)))
        return (false);
    return (true);
}