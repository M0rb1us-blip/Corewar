/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** argument_handling
*/

#include "../../include/struct.h"

bool argument_handling(int ac, char **av, champion_t ***champions, int *dump)
{
    int n = 1;
    int a = -1;
    int buff = 0;

    if (!argument_error_handling(ac, av))
        return (false);
    for (int i = 1; i < ac; i++) {
        if (!add_champ_from_argument(av[i], &n, &a, champions))
            return (false);
        switch (check_arguments(av, i, &buff)) {
        case 1: n = buff;
            break;
        case 2: a = buff;
            break;
        case 3: *dump = buff;
            break;
        }
    }
    if (!check_champion_nb_error(champions))
        return (false);
    return (true);
}