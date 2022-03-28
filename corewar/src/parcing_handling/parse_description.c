/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** parse_description
*/

#include "../../include/struct.h"

char *parse_description(char c)
{
    char *description = malloc((1 + MAX_ARGS_NUMBER) * sizeof(char));

    if (description == NULL)
        return (NULL);
    for (int i = 0; i < MAX_ARGS_NUMBER; i++) {
        description[MAX_ARGS_NUMBER - i - 1] = c & 3;
        c >>= 2;
    }
    description[MAX_ARGS_NUMBER] = 0;
    return (description);
}