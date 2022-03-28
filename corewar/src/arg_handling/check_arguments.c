/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** check_arguments
*/

#include "../../include/struct.h"

int check_arguments(char **av, int i, int *buff)
{
    if (my_strcmp(av[i], "-n")) {
        *buff = my_get_nbr(av[i + 1]);
        return (1);
    }
    if (my_strcmp(av[i], "-a")) {
        *buff = my_get_nbr(av[i + 1]);
        return (2);
    }
    if (my_strcmp(av[i], "-dump")) {
        *buff = my_get_nbr(av[i + 1]);
        return (3);
    }
    return (0);
}