/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** parse_from_mem
*/

#include "../../include/struct.h"

bool parse_from_mem(proc_t *proc)
{
    proc->instruction->size = 2;
    proc->instruction->code = proc->pc->val;
    proc->pc = proc->pc->next;
    if (!is_instruct_valid_vm(proc->instruction->code)) {
        proc->instruction->code = 0;
        return (true);
    }
    if (!get_descript_from_mem(proc))
        return (false);
    if (!instruction_is_valid(proc->instruction)) {
        proc->pc = proc->pc->prev;
        proc->instruction->code = 0;
        return (true);
    }
    parse_arg_from_mem(proc);
    if (!register_handling(proc->instruction)) {
        proc->pc = go_n_prev(proc->pc, proc->instruction->size - 1);
        proc->instruction->code = 0;
    }
    return (true);
}