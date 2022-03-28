/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** end_of_file
*/

#include "../../include/struct.h"

bool end_of_file_corewar(char *path, char *end)
{
    int n = my_strlen(path) - 1;
    int i = 0;

    if (n <= my_strlen(end) - 1)
        return (false);
    for (i = n; path[i] && path[i] != '.'; i--);
    path += i;
    if (!my_strcmp(path, end))
        return (false);
    return (true);
}