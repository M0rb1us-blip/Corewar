/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** do_cycle
*/

#include "../../include/struct.h"

int find_cycle_n(int code)
{
    for (int i = 0; op_tab[i].code; i++)
        if (code == op_tab[i].code)
            return (op_tab[i].nbr_cycles);
    return (0);
}

void new_cycle(proc_t *proc)
{
    parse_from_mem(proc);
    proc->cycles = find_cycle_n(proc->instruction->code);
}

bool exec_cycle(proc_t ***procs, int i, fct_t *fcts)
{
    bool ret = true;

    if (!procs[0][i]->instruction->code)
        return (true);
    for (int j = 0; fcts[j].code; j++) {
        if (fcts[j].code == procs[0][i]->instruction->code) {
            ret = fcts[j].fct(procs, i);
            break;
        }
    }
    if (ret == false)
        return (false);
    return (true);
}

bool do_one_cycle(proc_t ***procs, int i, fct_t *fcts)
{
    if (!procs[0][i]->is_active)
        return (true);
    if (procs[0][i]->cycles <= 0) {
        if (!exec_cycle(procs, i, fcts))
            return (false);
        new_cycle(procs[0][i]);
    }
    procs[0][i]->cycles--;
    return (true);
}

bool do_cycle(proc_t ***procs, fct_t *fcts)
{
    for (int i = 0; procs[0][i]; i++)
        if (!do_one_cycle(procs, i, fcts))
            return (false);
    return (true);
}
