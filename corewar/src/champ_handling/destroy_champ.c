/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** destroy_champ
*/

#include "../../include/struct.h"

void destroy_champ(champion_t **champions)
{
    for (int i = 0; champions[i]; i++) {
        if (champions[i]->instructions)
            free(champions[i]->instructions);
        if (champions[i]->header)
            free(champions[i]->header);
        free(champions[i]);
    }
    free(champions);
}