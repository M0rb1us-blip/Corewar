/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** live
*/

#include "../../include/struct.h"

char *get_the_name_of_the_champ(proc_t **procs, int nb)
{
    for (int i = 0; procs[i]; i++)
        if (procs[i]->champion->prog_number==nb && !procs[i]->champion->dead) {
            procs[i]->champion->last_live = 0;
            return (procs[i]->champion->header->prog_name);
        }
    return (NULL);
}

bool live(proc_t ***process, int i)
{
    int nb = process[0][i]->instruction->args[0];
    char *name = get_the_name_of_the_champ(*process, nb);

    if (!name)
        return (true);
    my_printf("The player %i(%s) is alive.\n", nb, name);
    nb_live++;
    if (nb_live > NBR_LIVE) {
        cycle_to_die -= CYCLE_DELTA;
        nb_live = 0;
    }
    return (true);
}