/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** check_lives
*/

#include "../../include/struct.h"

int cycle_to_die = CYCLE_TO_DIE;
int nb_live = 0;

bool check_lives(champion_t **champions, proc_t **procs)
{
    static bool is_first_instruction = true;
    int alives = 0;

    for (int i = 0; champions[i]; i++) {
        if (!is_first_instruction)
            champions[i]->last_live++;
        else
            is_first_instruction = false;
        if (champions[i]->last_live > cycle_to_die) {
            champions[i]->dead = true;
        }
    }
    for (int i = 0; procs[i]; i++)
        if (procs[i]->champion->dead)
            procs[i]->is_active = false;
    for (int i = 0; champions[i]; i++)
        if (!champions[i]->dead)
            alives++;
    if (alives <= 1)
        return (false);
    return (true);
}