/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** get_descript_from_mem
*/

#include "../../include/struct.h"

bool get_descript_from_mem(proc_t *proc)
{
    if (only_one_arg(proc->instruction->code)) {
        if (!proc->instruction->description)
            proc->instruction->description = malloc(sizeof(char) * 2);
        if (!proc->instruction->description)
            return (false);
        proc->instruction->description[1] = 0;
        proc->instruction->description[0] = 2;
        return (true);
    }
    if (proc->instruction->description)
        free(proc->instruction->description);
    proc->instruction->description = parse_description(proc->pc->val);
    if (!proc->instruction->description)
        return (false);
    proc->pc = proc->pc->next;
    return (true);
}