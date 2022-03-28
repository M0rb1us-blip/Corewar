/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** is_option_valid
*/

#include "../../include/struct.h"

bool is_option_valid(char **av, bool *expected, int *i)
{
    if (my_strcmp(av[*i], "-n") || my_strcmp(av[*i], "-a") ||\
my_strcmp(av[*i], "-dump")) {
        if (!av[*i + 1] || !is_num(av[*i + 1]))
            return (false);
        if (av[*i][1] != 'd')
            *expected = true;
    } else
        return (false);
    (*i)++;
    return (true);
}