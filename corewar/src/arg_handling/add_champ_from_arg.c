/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** add_champ_from_arg
*/

#include "../../include/struct.h"

bool add_champ_from_argument(char *path, int *n, int *a, champion_t ***champs)
{
    champion_t *to_add = NULL;

    if (!end_of_file_corewar(path, ".cor"))
        return (true);
    if (!(to_add = create_champion(path, *n, *a)))
        return (false);
    *champs = push_champion(*champs, to_add);
    if (!*champs)
        return (false);
    (*n)++;
    *a = -1;
    return (true);
}