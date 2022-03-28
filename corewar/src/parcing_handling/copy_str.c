/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** copy_str
*/

#include "../../include/struct.h"

char *copy_str(char *str, int size)
{
    char *ret = malloc(sizeof(char) * (PROG_NAME_LENGTH + 1));

    if (ret == NULL)
        return (NULL);
    for (int i = 0; i < size && str[i]; i++) {
    }
    ret[PROG_NAME_LENGTH] = 0;
    return (ret);
}