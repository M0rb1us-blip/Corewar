/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** argument_error_handling
*/

#include "../../include/struct.h"

bool argument_error_handling(int ac, char **av)
{
    int champions = 0;
    bool expected = false;
    int fd = 0;

    for (int i = 1; i < ac; i++) {
        if (end_of_file_corewar(av[i], ".cor") &&
        (fd = open(av[i], O_RDONLY)) != -1) {
            close(fd);
            champions++;
            expected = false;
        } else if (!is_option_valid(av, &expected, &i))
            return (false);
    }
    if (expected || champions < 2 || champions > 4)
        return (false);
    return (true);
}