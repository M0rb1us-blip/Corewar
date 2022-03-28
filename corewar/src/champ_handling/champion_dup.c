/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** champion_dup
*/

#include "../../include/struct.h"

champion_t *champion_dup(champion_t *dup)
{
    champion_t *new = malloc(sizeof(champion_t));

    if (new == NULL)
        return (NULL);
    new->color = dup->color;
    new->dead = dup->dead;
    new->header = dup->header;
    new->instructions = dup->instructions;
    new->last_live = dup->last_live;
    new->prog_number = dup->prog_number;
    new->start_offset = dup->start_offset;
    return (new);
}