/*
** EPITECH PROJECT, 2021
** B-CPE-201-NCY-2-1-corewar-silviu.zaino [WSL: Ubuntu-20.04]
** File description:
** parse_args
*/

#include "../../include/struct.h"

int *parse_args(char **file, int *size, char *description)
{
    int *args = malloc(sizeof(int) * 4);

    if (args == NULL)
        return (NULL);
    for (int i = 0; i < 4; i++)
        args[i] = 0;
    if (description == NULL) {
        args[0] = reverse_bytes(*(int *)(*file));
        *file += 4;
        *size -= 4;
        return (args);
    }
    args = fill_arg(file, size, description, args);
    return (args);
}