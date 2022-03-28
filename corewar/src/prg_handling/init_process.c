/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** init_process
*/

#include "../../include/struct.h"

proc_t **init_process(champion_t **champions, list_t *memory)
{
    proc_t **procs = NULL;
    int n_champs;

    for (n_champs = 0; champions[n_champs]; n_champs++);
    procs = malloc(sizeof(proc_t *) * (n_champs + 1));
    if (procs == NULL)
        return (NULL);
    procs[n_champs] = NULL;
    for (int i = 0; i < n_champs; i++) {
        procs[i] = malloc(sizeof(proc_t));
        if (procs[i] == NULL)
            return (NULL);
        *procs[i] = (proc_t){0};
        if ((procs = fill_process(procs, memory, champions, i)) == NULL)
            return (NULL);
    }
    return (procs);
}