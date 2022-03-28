/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** start_prg
*/

#include "../../include/struct.h"

bool start_prg(champion_t **champions, list_t *memory, int dump)
{
    proc_t **procs = init_process(champions, memory);
    fct_t *fcts = init_functions();
    int cycle = 0;

    if (procs == NULL || !fcts)
        return (false);
    while (true) {
        if (!check_lives(champions, procs))
            break;
        if (!do_cycle(&procs, fcts))
            return (false);
        if (cycle == dump) {
            dump_memory(memory);
            break;
        }
        cycle++;
    }
    display_the_winner(champions);
    destroy_processes(procs);
    free(fcts);
    return (true);
}