/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** check_champion_nb_error
*/

#include "../../include/struct.h"

bool check_champion_nb_error(champion_t ***champions)
{
    for (int i = 0, error = 0; champions[0][i]; i++) {
        for (int j = 0; champions[0][j]; j++) {
            error = i != j && champions[0][i]->prog_number ==
            champions[0][j]->prog_number ? 1 : error;
        }
        if (error)
            return (false);
    }
    return (true);
}