/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** display_the_winner
*/

#include "../../include/struct.h"

void display_the_winner(champion_t **champions)
{
    bool biggest = true;

    for (int i = 0; champions[i]; i++) {
        biggest = true;
        for (int j = 0; champions[j]; j++)
            champions[i]->last_live > champions[j]->last_live ?\
biggest = false : 0;
        if (biggest) {
            my_printf("The player %d(%s) has won.\n", \
champions[i]->prog_number, champions[i]->header->prog_name);
            return;
        }
    }
}