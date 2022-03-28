/*
** EPITECH PROJECT, 2021
** corewar [WSL: Ubuntu-20.04]
** File description:
** fill_arg
*/

#include "../../include/struct.h"

int *fill_arg(char **file, int *size, char *description, int *args)
{
    for (int i = 0; description[i]; i++){
        switch (description[i]) {
        case 1: args[i] = file[0][0];
            *file += 1;
            *size -= 1;
            break;
        case 2: args[i] = reverse_bytes(*(int *)(*file));
            *file += 4;
            *size -= 4;
            break;
        case 3: args[i] = reverse_bytes_two(*(short *)(*file));
            *file += 2;
            *size -= 2;
            break;
        }
    }
    return (args);
}